//
// Created by 16531 on 2024/1/12.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Sender_interface.h" resolved

#include <QDesktopServices>
#include <QFileDialog>
#include "sender_interface.h"
#include "ui_Sender_interface.h"
#include "../Program/system.h"
#include "receiver_interface.h"


using namespace std;

Sender_interface::Sender_interface(QWidget *parent) :
        QWidget(parent), ui(new Ui::Sender_interface) {
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowCloseButtonHint);
    setAttribute(Qt::WA_TranslucentBackground);
    setStyleSheet("border-radius:15px;");
    ui->plainTextEdit->setStyleSheet(
            "QLineEdit{border-radius:8px;background-color:white;border:10px solid rgb(205,221,236)}");
    ui->textBrowser->setStyleSheet(
            "QLineEdit{border-radius:8px;background-color:white;border:10px solid rgb(205,221,236)}");
    this->ui->Complete_Code_Label->close();
    this->ui->Not_Null_Label->close();
    this->ui->Wrong_Code_Label_2->close();
}

Sender_interface::~Sender_interface() {
    delete ui;
}

void Sender_interface::on_Close_Button_clicked() {
    this->close();
}


void Sender_interface::on_Hide_Button_clicked() {
    this->showMinimized();
}

void Sender_interface::on_Straight_Encode_Button_clicked() {
    this->ui->textBrowser->clear();
    this->ui->Complete_Code_Label->close();
    if (this->ui->plainTextEdit->toPlainText() != "") {
        string DataString = this->ui->plainTextEdit->toPlainText().toStdString();
        HuffmanTree huffmanTree = initHuffmanTree(DataString);
        if (huffmanTree.getWeight() == -1) {
            ui->Wrong_Code_Label_2->show();
            return;
        }
        string huffmanCode;
        CreateHuffmanCode(huffmanTree, &huffmanTree, huffmanCode);
        string result = huffmanTree.Encode(DataString);
        this->ui->textBrowser->setText(QString::fromStdString(result));
        saveTree(huffmanTree);
        saveCode(result);
        this->ui->Complete_Code_Label->show();
    } else {
        ui->plainTextEdit->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121)}"
        );
        ui->Not_Null_Label->show();
    }
}

void Sender_interface::on_plainTextEdit_textChanged() {
    this->ui->Not_Null_Label->close();
    this->ui->Wrong_Code_Label_2->close();
}

void Sender_interface::on_Data_Encode_Button_clicked() {
    char dataString[1000] = {0};
    string dataPath = "data.txt";
    ReadFile(dataPath, dataString);
    this->ui->plainTextEdit->setPlainText(QString::fromStdString(dataString));
    on_Straight_Encode_Button_clicked();
}

void Sender_interface::on_Open_FileFolder_clicked() {
    QString path = QCoreApplication::applicationDirPath();
    QDesktopServices::openUrl(QUrl("file:" + path, QUrl::TolerantMode));
}

void Sender_interface::on_Change_Button_clicked() {
    Receiver_interface *receiverInterface = new Receiver_interface;
    this->close();
    receiverInterface->show();
}

