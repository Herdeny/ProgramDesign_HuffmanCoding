/********************************************************************************
** Form generated from reading UI file 'receiver_interface.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIVER_INTERFACE_H
#define UI_RECEIVER_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Receiver_interface
{
public:
    QFrame *LoginMenu;
    QPushButton *Code_Decode_Button;
    QLabel *Welcome_Label;
    QPushButton *Close_Button;
    QPushButton *Hide_Button;
    QPushButton *Load_Tree_Button;
    QPushButton *Change_Button;
    QPushButton *Straight_Decode_Button;
    QPlainTextEdit *plainTextEdit;
    QLabel *Welcome_Label_2;
    QTextBrowser *textBrowser;
    QLabel *Welcome_Label_3;
    QLabel *Complete_Decode_Label;
    QLabel *Not_Null_Label;
    QLabel *Wrong_Code_Label_2;

    void setupUi(QWidget *Receiver_interface)
    {
        if (Receiver_interface->objectName().isEmpty())
            Receiver_interface->setObjectName("Receiver_interface");
        Receiver_interface->resize(739, 407);
        LoginMenu = new QFrame(Receiver_interface);
        LoginMenu->setObjectName("LoginMenu");
        LoginMenu->setGeometry(QRect(0, 0, 761, 421));
        LoginMenu->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        LoginMenu->setFrameShape(QFrame::NoFrame);
        LoginMenu->setFrameShadow(QFrame::Raised);
        Code_Decode_Button = new QPushButton(LoginMenu);
        Code_Decode_Button->setObjectName("Code_Decode_Button");
        Code_Decode_Button->setGeometry(QRect(260, 200, 221, 41));
        Code_Decode_Button->setCursor(QCursor(Qt::OpenHandCursor));
        Code_Decode_Button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        Welcome_Label = new QLabel(LoginMenu);
        Welcome_Label->setObjectName("Welcome_Label");
        Welcome_Label->setGeometry(QRect(270, 40, 201, 61));
        Close_Button = new QPushButton(LoginMenu);
        Close_Button->setObjectName("Close_Button");
        Close_Button->setGeometry(QRect(710, 0, 31, 31));
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
        Hide_Button->setGeometry(QRect(680, 0, 31, 31));
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
        Load_Tree_Button = new QPushButton(LoginMenu);
        Load_Tree_Button->setObjectName("Load_Tree_Button");
        Load_Tree_Button->setGeometry(QRect(260, 270, 221, 41));
        Load_Tree_Button->setCursor(QCursor(Qt::OpenHandCursor));
        Load_Tree_Button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        Change_Button = new QPushButton(LoginMenu);
        Change_Button->setObjectName("Change_Button");
        Change_Button->setGeometry(QRect(260, 340, 221, 41));
        Change_Button->setCursor(QCursor(Qt::OpenHandCursor));
        Change_Button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        Straight_Decode_Button = new QPushButton(LoginMenu);
        Straight_Decode_Button->setObjectName("Straight_Decode_Button");
        Straight_Decode_Button->setGeometry(QRect(260, 130, 221, 41));
        Straight_Decode_Button->setCursor(QCursor(Qt::OpenHandCursor));
        Straight_Decode_Button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        plainTextEdit = new QPlainTextEdit(LoginMenu);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(10, 130, 231, 251));
        plainTextEdit->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 170, 255);"));
        Welcome_Label_2 = new QLabel(LoginMenu);
        Welcome_Label_2->setObjectName("Welcome_Label_2");
        Welcome_Label_2->setGeometry(QRect(80, 90, 81, 31));
        textBrowser = new QTextBrowser(LoginMenu);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(500, 130, 231, 251));
        Welcome_Label_3 = new QLabel(LoginMenu);
        Welcome_Label_3->setObjectName("Welcome_Label_3");
        Welcome_Label_3->setGeometry(QRect(570, 90, 111, 31));
        Complete_Decode_Label = new QLabel(LoginMenu);
        Complete_Decode_Label->setObjectName("Complete_Decode_Label");
        Complete_Decode_Label->setGeometry(QRect(340, 100, 71, 16));
        Not_Null_Label = new QLabel(LoginMenu);
        Not_Null_Label->setObjectName("Not_Null_Label");
        Not_Null_Label->setGeometry(QRect(340, 100, 131, 16));
        Wrong_Code_Label_2 = new QLabel(LoginMenu);
        Wrong_Code_Label_2->setObjectName("Wrong_Code_Label_2");
        Wrong_Code_Label_2->setGeometry(QRect(310, 100, 131, 16));

        retranslateUi(Receiver_interface);
        QObject::connect(Close_Button, SIGNAL(clicked()), Receiver_interface, SLOT(on_Close_Button_clicked()));
        QObject::connect(Hide_Button, SIGNAL(clicked()), Receiver_interface, SLOT(on_Hide_Button_clicked()));
        QObject::connect(Straight_Decode_Button, SIGNAL(clicked()), Receiver_interface, SLOT(on_Straight_Decode_Button_clicked()));
        QObject::connect(Code_Decode_Button, SIGNAL(clicked()), Receiver_interface, SLOT(on_Code_Decode_Button_clicked()));
        QObject::connect(Load_Tree_Button, SIGNAL(clicked()), Receiver_interface, SLOT(on_Load_Tree_Button_clicked()));
        QObject::connect(Change_Button, SIGNAL(clicked()), Receiver_interface, SLOT(on_Open_FileForder_Button_clicked()));

        QMetaObject::connectSlotsByName(Receiver_interface);
    } // setupUi

    void retranslateUi(QWidget *Receiver_interface)
    {
        Receiver_interface->setWindowTitle(QCoreApplication::translate("Receiver_interface", "Receiver_interface", nullptr));
        Code_Decode_Button->setText(QCoreApplication::translate("Receiver_interface", "\350\257\221\347\240\201 \"code.txt\" \346\226\207\344\273\266", nullptr));
        Welcome_Label->setText(QCoreApplication::translate("Receiver_interface", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700; color:#0974ae;\">\345\223\210\345\244\253\346\233\274\350\257\221\347\240\201\347\253\257</span></p></body></html>", nullptr));
        Close_Button->setText(QCoreApplication::translate("Receiver_interface", "X", nullptr));
        Hide_Button->setText(QCoreApplication::translate("Receiver_interface", "\342\200\224", nullptr));
        Load_Tree_Button->setText(QCoreApplication::translate("Receiver_interface", "\346\230\276\347\244\272\345\223\210\345\244\253\346\233\274\347\274\226\347\240\201", nullptr));
        Change_Button->setText(QCoreApplication::translate("Receiver_interface", "\345\210\207\346\215\242\345\210\260\347\274\226\347\240\201\347\253\257", nullptr));
        Straight_Decode_Button->setText(QCoreApplication::translate("Receiver_interface", "\350\257\221\347\240\201\342\200\224\342\200\224\342\200\224\342\200\224>>>", nullptr));
        Welcome_Label_2->setText(QCoreApplication::translate("Receiver_interface", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#0974ae;\">\345\257\206\346\226\207\350\276\223\345\205\245\347\253\257</span></p></body></html>", nullptr));
        Welcome_Label_3->setText(QCoreApplication::translate("Receiver_interface", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#0974ae;\">\346\230\216\346\226\207\346\230\276\347\244\272\347\253\257</span></p></body></html>", nullptr));
        Complete_Decode_Label->setText(QCoreApplication::translate("Receiver_interface", "\350\257\221\347\240\201\345\256\214\346\210\220", nullptr));
        Not_Null_Label->setText(QCoreApplication::translate("Receiver_interface", "\350\276\223\345\205\245\347\253\257\344\270\272\347\251\272\357\274\201", nullptr));
        Wrong_Code_Label_2->setText(QCoreApplication::translate("Receiver_interface", "\345\257\206\346\226\207\346\234\211\350\257\257\357\274\214\350\257\267\346\240\270\345\257\271\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Receiver_interface: public Ui_Receiver_interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIVER_INTERFACE_H
