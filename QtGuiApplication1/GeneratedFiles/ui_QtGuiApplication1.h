/********************************************************************************
** Form generated from reading UI file 'QtGuiApplication1.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIAPPLICATION1_H
#define UI_QTGUIAPPLICATION1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiApplication1Class
{
public:
    QWidget *centralWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *OpenCameraBtn;
    QPushButton *CloseCameraBtn;
    QPushButton *TakePicBtn;
    QLabel *label_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGuiApplication1Class)
    {
        if (QtGuiApplication1Class->objectName().isEmpty())
            QtGuiApplication1Class->setObjectName(QStringLiteral("QtGuiApplication1Class"));
        QtGuiApplication1Class->resize(916, 622);
        centralWidget = new QWidget(QtGuiApplication1Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 10, 251, 201));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 249, 199));
        scrollArea->setWidget(scrollAreaWidgetContents);
        scrollArea_2 = new QScrollArea(centralWidget);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(10, 260, 251, 221));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 249, 219));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(730, 290, 91, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(730, 340, 91, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 220, 111, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 490, 91, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(280, 10, 241, 221));
        OpenCameraBtn = new QPushButton(centralWidget);
        OpenCameraBtn->setObjectName(QStringLiteral("OpenCameraBtn"));
        OpenCameraBtn->setGeometry(QRect(730, 390, 91, 21));
        CloseCameraBtn = new QPushButton(centralWidget);
        CloseCameraBtn->setObjectName(QStringLiteral("CloseCameraBtn"));
        CloseCameraBtn->setGeometry(QRect(730, 440, 91, 21));
        TakePicBtn = new QPushButton(centralWidget);
        TakePicBtn->setObjectName(QStringLiteral("TakePicBtn"));
        TakePicBtn->setGeometry(QRect(730, 490, 91, 21));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(280, 270, 251, 211));
        QtGuiApplication1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtGuiApplication1Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 916, 26));
        QtGuiApplication1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtGuiApplication1Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtGuiApplication1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtGuiApplication1Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtGuiApplication1Class->setStatusBar(statusBar);

        retranslateUi(QtGuiApplication1Class);
        QObject::connect(pushButton, SIGNAL(clicked()), QtGuiApplication1Class, SLOT(on_open_clicked()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), QtGuiApplication1Class, SLOT(on_process_clicked()));
        QObject::connect(OpenCameraBtn, SIGNAL(clicked()), QtGuiApplication1Class, SLOT(on_OpenCameraBtn_clicked()));
        QObject::connect(CloseCameraBtn, SIGNAL(clicked()), QtGuiApplication1Class, SLOT(on_CloseCameraBtn_clicked()));
        QObject::connect(TakePicBtn, SIGNAL(clicked()), QtGuiApplication1Class, SLOT(on_TakePicBtn_clicked()));

        QMetaObject::connectSlotsByName(QtGuiApplication1Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiApplication1Class)
    {
        QtGuiApplication1Class->setWindowTitle(QApplication::translate("QtGuiApplication1Class", "QtGuiApplication1", Q_NULLPTR));
        pushButton->setText(QApplication::translate("QtGuiApplication1Class", "\346\211\223\345\274\200\345\233\276\347\211\207", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("QtGuiApplication1Class", "\345\244\204\347\220\206\345\233\276\347\211\207", Q_NULLPTR));
        label->setText(QApplication::translate("QtGuiApplication1Class", "\346\211\223\345\274\200\347\232\204\345\216\237\345\233\276", Q_NULLPTR));
        label_2->setText(QApplication::translate("QtGuiApplication1Class", "\346\211\223\345\274\200\347\232\204\345\244\204\347\220\206\345\233\276", Q_NULLPTR));
        label_3->setText(QApplication::translate("QtGuiApplication1Class", "\346\221\204\345\203\217\345\244\264", Q_NULLPTR));
        OpenCameraBtn->setText(QApplication::translate("QtGuiApplication1Class", "\346\211\223\345\274\200\346\221\204\345\203\217\345\244\264", Q_NULLPTR));
        CloseCameraBtn->setText(QApplication::translate("QtGuiApplication1Class", "\345\205\263\351\227\255\346\221\204\345\203\217\345\244\264", Q_NULLPTR));
        TakePicBtn->setText(QApplication::translate("QtGuiApplication1Class", "\346\213\215\347\205\247", Q_NULLPTR));
        label_4->setText(QApplication::translate("QtGuiApplication1Class", "\346\213\215\347\205\247", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtGuiApplication1Class: public Ui_QtGuiApplication1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIAPPLICATION1_H
