/********************************************************************************
** Form generated from reading UI file 'sender_interface.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDER_INTERFACE_H
#define UI_SENDER_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sender_interface
{
public:
    QFrame *LoginMenu;
    QPushButton *Data_Encode_Button;
    QLabel *Welcome_Label;
    QPushButton *Close_Button;
    QPushButton *Hide_Button;
    QPushButton *Change_Button;
    QPushButton *Open_FileFolder;
    QPushButton *Straight_Encode_Button;
    QPlainTextEdit *plainTextEdit;
    QLabel *Welcome_Label_2;
    QTextBrowser *textBrowser;
    QLabel *Welcome_Label_3;
    QLabel *Complete_Code_Label;
    QLabel *Not_Null_Label;
    QLabel *Wrong_Code_Label_2;

    void setupUi(QWidget *Sender_interface)
    {
        if (Sender_interface->objectName().isEmpty())
            Sender_interface->setObjectName("Sender_interface");
        Sender_interface->resize(738, 408);
        LoginMenu = new QFrame(Sender_interface);
        LoginMenu->setObjectName("LoginMenu");
        LoginMenu->setGeometry(QRect(0, 0, 761, 421));
        LoginMenu->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        LoginMenu->setFrameShape(QFrame::NoFrame);
        LoginMenu->setFrameShadow(QFrame::Raised);
        Data_Encode_Button = new QPushButton(LoginMenu);
        Data_Encode_Button->setObjectName("Data_Encode_Button");
        Data_Encode_Button->setGeometry(QRect(260, 200, 221, 41));
        Data_Encode_Button->setCursor(QCursor(Qt::OpenHandCursor));
        Data_Encode_Button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        Open_FileFolder = new QPushButton(LoginMenu);
        Open_FileFolder->setObjectName("Open_FileFolder");
        Open_FileFolder->setGeometry(QRect(260, 270, 221, 41));
        Open_FileFolder->setCursor(QCursor(Qt::OpenHandCursor));
        Open_FileFolder->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        Straight_Encode_Button = new QPushButton(LoginMenu);
        Straight_Encode_Button->setObjectName("Straight_Encode_Button");
        Straight_Encode_Button->setGeometry(QRect(260, 130, 221, 41));
        Straight_Encode_Button->setCursor(QCursor(Qt::OpenHandCursor));
        Straight_Encode_Button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        Welcome_Label_2 = new QLabel(LoginMenu);
        Welcome_Label_2->setObjectName("Welcome_Label_2");
        Welcome_Label_2->setGeometry(QRect(80, 90, 81, 31));
        textBrowser = new QTextBrowser(LoginMenu);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(500, 130, 231, 251));
        textBrowser->setStyleSheet(QString::fromUtf8("border-color: rgb(170, 170, 255);"));
        Welcome_Label_3 = new QLabel(LoginMenu);
        Welcome_Label_3->setObjectName("Welcome_Label_3");
        Welcome_Label_3->setGeometry(QRect(570, 90, 111, 31));
        Complete_Code_Label = new QLabel(LoginMenu);
        Complete_Code_Label->setObjectName("Complete_Code_Label");
        Complete_Code_Label->setGeometry(QRect(340, 100, 131, 16));
        Not_Null_Label = new QLabel(LoginMenu);
        Not_Null_Label->setObjectName("Not_Null_Label");
        Not_Null_Label->setGeometry(QRect(340, 100, 131, 16));
        Wrong_Code_Label_2 = new QLabel(LoginMenu);
        Wrong_Code_Label_2->setObjectName("Wrong_Code_Label_2");
        Wrong_Code_Label_2->setGeometry(QRect(310, 100, 131, 16));

        retranslateUi(Sender_interface);
        QObject::connect(plainTextEdit, SIGNAL(textChanged()), Sender_interface, SLOT(on_plainTextEdit_textChanged()));

        QMetaObject::connectSlotsByName(Sender_interface);
    } // setupUi

    void retranslateUi(QWidget *Sender_interface)
    {
        Sender_interface->setWindowTitle(QCoreApplication::translate("Sender_interface", "Sender_interface", nullptr));
        Data_Encode_Button->setText(QCoreApplication::translate("Sender_interface", "\347\274\226\347\240\201 \"data.txt\" \346\226\207\344\273\266", nullptr));
        Welcome_Label->setText(QCoreApplication::translate("Sender_interface", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700; color:#0974ae;\">\345\223\210\345\244\253\346\233\274\347\274\226\347\240\201\347\253\257</span></p></body></html>", nullptr));
        Close_Button->setText(QCoreApplication::translate("Sender_interface", "X", nullptr));
        Hide_Button->setText(QCoreApplication::translate("Sender_interface", "\342\200\224", nullptr));
        Change_Button->setText(QCoreApplication::translate("Sender_interface", "\345\210\207\346\215\242\345\210\260\350\257\221\347\240\201\347\253\257", nullptr));
        Open_FileFolder->setText(QCoreApplication::translate("Sender_interface", "\346\211\223\345\274\200\345\257\206\346\226\207\344\270\216\345\223\210\345\244\253\346\233\274\346\240\221\346\211\200\345\234\250\346\226\207\344\273\266\345\244\271", nullptr));
        Straight_Encode_Button->setText(QCoreApplication::translate("Sender_interface", "\347\274\226\347\240\201\342\200\224\342\200\224\342\200\224\342\200\224>>>", nullptr));
        Welcome_Label_2->setText(QCoreApplication::translate("Sender_interface", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#0974ae;\">\346\230\216\346\226\207\350\276\223\345\205\245\347\253\257</span></p></body></html>", nullptr));
        Welcome_Label_3->setText(QCoreApplication::translate("Sender_interface", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#0974ae;\">\345\257\206\346\226\207\346\230\276\347\244\272\347\253\257</span></p></body></html>", nullptr));
        Complete_Code_Label->setText(QCoreApplication::translate("Sender_interface", "\347\274\226\347\240\201\345\256\214\346\210\220", nullptr));
        Not_Null_Label->setText(QCoreApplication::translate("Sender_interface", "\350\276\223\345\205\245\347\253\257\344\270\272\347\251\272\357\274\201", nullptr));
        Wrong_Code_Label_2->setText(QCoreApplication::translate("Sender_interface", "\346\230\216\346\226\207\344\270\215\345\220\210\350\247\204\357\274\214\350\257\267\346\240\270\345\257\271\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sender_interface: public Ui_Sender_interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDER_INTERFACE_H
