/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindow
{
public:
    QFrame *LoginMenu;
    QPushButton *Close_Button;
    QPushButton *Hide_Button;
    QPushButton *Sender_Button;
    QPushButton *Receiver_Button;
    QLabel *Welcome_Label_3;
    QLabel *label;

    void setupUi(QWidget *mainwindow)
    {
        if (mainwindow->objectName().isEmpty())
            mainwindow->setObjectName("mainwindow");
        mainwindow->resize(491, 171);
        LoginMenu = new QFrame(mainwindow);
        LoginMenu->setObjectName("LoginMenu");
        LoginMenu->setGeometry(QRect(0, 0, 491, 171));
        LoginMenu->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        LoginMenu->setFrameShape(QFrame::NoFrame);
        LoginMenu->setFrameShadow(QFrame::Raised);
        Close_Button = new QPushButton(LoginMenu);
        Close_Button->setObjectName("Close_Button");
        Close_Button->setGeometry(QRect(460, 0, 31, 31));
        Close_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-style:outset;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-radius:0px\n"
"}\n"
"\n"
"QPushButton:hover{ \n"
"	background-color: rgb(255, 0, 0);\n"
"}\n"
" \n"
"QPushButton:pressed{\n"
"	background-color: rgb(220,92,102);\n"
"}"));
        Hide_Button = new QPushButton(LoginMenu);
        Hide_Button->setObjectName("Hide_Button");
        Hide_Button->setGeometry(QRect(430, 0, 31, 31));
        Hide_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-style:outset;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-radius:0px\n"
"}\n"
"\n"
"QPushButton:hover{ \n"
"	background-color: rgb(239, 231, 231);\n"
"}\n"
" \n"
"QPushButton:pressed{\n"
"	background-color: rgb(243,234,234);\n"
"}"));
        Sender_Button = new QPushButton(LoginMenu);
        Sender_Button->setObjectName("Sender_Button");
        Sender_Button->setGeometry(QRect(10, 110, 221, 41));
        Sender_Button->setCursor(QCursor(Qt::OpenHandCursor));
        Sender_Button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0076b4;\n"
"    border: 1px solid #dcdfe6;\n"
"    padding: 10px;\n"
"    border-radius: 5px;\n"
"	color: rgb(255, 255, 255);\n"
"	font: 600 10pt \"Segoe UI Variable Text Semibold\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #ecf5ff;\n"
"    color: #409eff;\n"
"}\n"
""));
        Receiver_Button = new QPushButton(LoginMenu);
        Receiver_Button->setObjectName("Receiver_Button");
        Receiver_Button->setGeometry(QRect(260, 110, 221, 41));
        Receiver_Button->setCursor(QCursor(Qt::OpenHandCursor));
        Receiver_Button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #0076b4;\n"
"    border: 1px solid #dcdfe6;\n"
"    padding: 10px;\n"
"    border-radius: 5px;\n"
"	color: rgb(255, 255, 255);\n"
"	font: 600 10pt \"Segoe UI Variable Text Semibold\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #ecf5ff;\n"
"    color: #409eff;\n"
"}\n"
""));
        Welcome_Label_3 = new QLabel(LoginMenu);
        Welcome_Label_3->setObjectName("Welcome_Label_3");
        Welcome_Label_3->setGeometry(QRect(140, 30, 231, 51));
        label = new QLabel(LoginMenu);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 80, 121, 20));

        retranslateUi(mainwindow);
        QObject::connect(Hide_Button, SIGNAL(clicked()), mainwindow, SLOT(on_Hide_Button_clicked()));
        QObject::connect(Close_Button, SIGNAL(clicked()), mainwindow, SLOT(on_Close_Button_clicked()));
        QObject::connect(Sender_Button, SIGNAL(clicked()), mainwindow, SLOT(on_Sender_Button_clicked()));
        QObject::connect(Receiver_Button, SIGNAL(clicked()), mainwindow, SLOT(on_Receiver_Button_clicked()));

        QMetaObject::connectSlotsByName(mainwindow);
    } // setupUi

    void retranslateUi(QWidget *mainwindow)
    {
        mainwindow->setWindowTitle(QCoreApplication::translate("mainwindow", "mainwindow", nullptr));
        Close_Button->setText(QCoreApplication::translate("mainwindow", "X", nullptr));
        Hide_Button->setText(QCoreApplication::translate("mainwindow", "\342\200\224", nullptr));
        Sender_Button->setText(QCoreApplication::translate("mainwindow", "\345\217\221\351\200\201\347\253\257-\347\274\226\347\240\201\347\225\214\351\235\242", nullptr));
        Receiver_Button->setText(QCoreApplication::translate("mainwindow", "\346\216\245\346\224\266\347\253\257-\350\257\221\347\240\201\347\225\214\351\235\242", nullptr));
        Welcome_Label_3->setText(QCoreApplication::translate("mainwindow", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700; color:#0974ae;\">\345\223\210\345\244\253\346\233\274\347\274\226\350\257\221\347\240\201\347\263\273\347\273\237</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("mainwindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\350\257\267\351\200\211\346\213\251\344\275\240\347\232\204\350\272\253\344\273\275\357\274\232</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainwindow: public Ui_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
