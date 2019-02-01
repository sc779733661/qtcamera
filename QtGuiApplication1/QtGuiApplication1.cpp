#include "QtGuiApplication1.h"

using namespace cv;
using namespace std;

QtGuiApplication1::QtGuiApplication1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	setWindowTitle(tr("Main Window"));
	openAction = new QAction(QIcon(":/images/doc-open"), tr("&Open..."), this);
	openAction->setShortcuts(QKeySequence::Open);
	openAction->setStatusTip(tr("Open an existing file"));

	connect(openAction, &QAction::triggered, this, &QtGuiApplication1::open);

	QMenu *file = menuBar()->addMenu(tr("&File"));
	file->addAction(openAction);

	QToolBar *toolBar = addToolBar(tr("&File"));
	toolBar->addAction(openAction);

	statusBar();

	timer = new QTimer(this);
	img = new QImage();
	connect(timer, SIGNAL(timeout()), this, SLOT(getFrame()));//超时就读取当前摄像头信息
}

QtGuiApplication1::~QtGuiApplication1()                        //析构函数
{
	
}

void QtGuiApplication1::open()
{
	QMessageBox::information(this, tr("Information"), tr("Open"));
}

void QtGuiApplication1::on_open_clicked()
{
	QString filename;
	filename = QFileDialog::getOpenFileName(this,
		tr("选择图像"),
		"",
		tr("Images (*.png *.bmp *.jpg *.tif *.GIF )"));
	if (filename.isEmpty())
	{
		return;
	}
	else
	{
		QImage* imgtest = new QImage;
		if (!(imgtest->load(filename)))                        //加载图像
		{
			QMessageBox::information(this,
				tr("打开图像失败"),
				tr("打开图像失败!"));
			delete imgtest;
			return;
		}

		string str = filename.toStdString();                  // 将filename转变为string类型；
		image = imread(str);
		cvtColor(image, image, CV_BGR2RGB);
		cv::resize(image, image, Size(300, 200));
		QImage img = QImage((const unsigned char*)(image.data), image.cols, image.rows, QImage::Format_RGB888);

		label = new QLabel();
		label->setPixmap(QPixmap::fromImage(img));
		label->resize(QSize(img.width(), img.height()));
		ui.scrollArea->setWidget(label);

	}

}

void QtGuiApplication1::on_process_clicked()
{
	flip(image, image, 4);                                    //反转函数 0 上下反转；整数，水平发转；负数，水平垂直均反转
	QImage img1 = QImage((const unsigned char*)(image.data), image.cols, image.rows, QImage::Format_RGB888);
	label_2 = new QLabel();
	label_2->setPixmap(QPixmap::fromImage(img1));
	label_2->resize(QSize(img1.width(), img1.height()));
	ui.scrollArea_2->setWidget(label_2);

}

//打开摄像头
void QtGuiApplication1::on_OpenCameraBtn_clicked()
{
	capture1.open(0);                                            //打开摄像头，从摄像头中获取视频
	timer->start(20);                                            //开始计时，超时则发出timeout()信号,1000为1秒，50毫秒取一帧
}

//连续取图
void QtGuiApplication1::getFrame()
{
	
	capture1 >> showimage;                         //从摄像头中抓取并返回每一帧，将抓取到的帧，从Mat格式转换为QImage格式,rgbSwapped是为了显示效果色彩好一些，QImage::Format_RGB888不同的摄像头用不同的格式。
	QImage img = Mat2QImage(showimage);

	//1...放在label上
	ui.label_3->setScaledContents(true);
	ui.label_3->setPixmap(QPixmap::fromImage(img));              //显示图片

	//2...放在scrollArea上
	//label = new QLabel();
	//label->setPixmap(QPixmap::fromImage(img));
	//label->resize(QSize(img.width(), img.height()));
	//ui.scrollArea->setWidget(label);
	
}

//拍照
void QtGuiApplication1::on_TakePicBtn_clicked()
{
	capture1.open(0);                                            //打开摄像头（拍照时不一定正在拍摄，如果不加，没点打开摄像头会崩）
	capture1 >> showimage;		 
	QImage img = Mat2QImage(showimage);

	ui.label_4->setScaledContents(true);
	ui.label_4->setPixmap(QPixmap::fromImage(img));             //将截取的图片显示到label4上
}

//关闭摄像头
void QtGuiApplication1::on_CloseCameraBtn_clicked()
{
	timer->stop(); //停止取帧
	ui.label_3->clear();
	capture1.release();

}

QImage QtGuiApplication1::Mat2QImage(Mat cvImg)
{
	Mat cvRgbImg;
	cvtColor(cvImg, cvRgbImg, CV_BGR2RGB);
	//cvtColor(cvImg, cvRgbImg, CV_BGR2GRAY);                   
	cv::resize(showimage, showimage, Size(300, 200));
	QImage dstImage((const uchar *)cvRgbImg.data, cvRgbImg.cols, cvRgbImg.rows, cvRgbImg.step, QImage::Format_RGB888);
	dstImage.bits();
	return dstImage;
}


