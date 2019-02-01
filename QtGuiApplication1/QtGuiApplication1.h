#pragma once

#ifndef QTGUIAPPLICATION1_H
#define QTGUIAPPLICATION1_H

#include <QtWidgets/QMainWindow>
#include <QAction>
#include <QMenuBar>
#include <QMessageBox>
#include <QStatusBar>
#include <QToolBar>
#include <QGraphicsScene>  
#include <QGraphicsView>                //graphicsview类
#include <qfiledialog.h>                //getopenfilename 类申明
#include <qlabel.h>                     //label类
#include <qtimer.h>
#include <qimage.h>

#include <opencv2\imgproc\imgproc.hpp>
#include <opencv2\core\core.hpp>
#include <opencv2\highgui\highgui.hpp>  //opencv申明

#include "ui_QtGuiApplication1.h"

using namespace cv;

class QtGuiApplication1 : public QMainWindow
{
	Q_OBJECT

public:
	QtGuiApplication1(QWidget *parent = Q_NULLPTR);
	~QtGuiApplication1();

private slots:                        
	void on_open_clicked();           //打开图片
	void on_process_clicked();        //处理图片
	void on_OpenCameraBtn_clicked();    //打开摄像头
	void getFrame();
	void on_TakePicBtn_clicked();
	void on_CloseCameraBtn_clicked();   //关闭摄像头

private:
	Ui::QtGuiApplication1Class ui;

	void open();
	QAction *openAction;

	Mat image;

	QTimer *timer;//定时器用于定时取帧，上面说的隔一段时间就去取就是用这个实现
	QImage *img;
	Mat showimage;//摄像头每次抓取的图像为一帧，使用该指针指向一帧图像的内存空间
	VideoCapture capture1;

	QLabel *label;
	QLabel *label_2;
	QLabel *label_3;
	QLabel *label_4;

	QImage Mat2QImage(Mat cvImg);

};

#endif //QTGUIAPPLICATION1_H