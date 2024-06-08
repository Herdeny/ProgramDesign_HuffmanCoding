//
// Created by 16531 on 2024/1/12.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Receiver_interface.h" resolved

#include <sstream>
#include "receiver_interface.h"
#include "ui_Receiver_interface.h"
#include "sender_interface.h"


Receiver_interface::Receiver_interface(QWidget *parent) :
        QWidget(parent), ui(new Ui::Receiver_interface) {
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    setStyleSheet("border-radius:15px;");
    this->ui->Complete_Decode_Label->close();
    this->ui->Not_Null_Label->close();
    this->ui->Wrong_Code_Label_2->close();
    ui->plainTextEdit->setStyleSheet(
            "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121)}"
    );
}

Receiver_interface::~Receiver_interface() {
    delete ui;
}

void Receiver_interface::on_Close_Button_clicked() {
    this->close();
}


void Receiver_interface::on_Hide_Button_clicked() {
    this->showMinimized();
}

void Receiver_interface::on_Straight_Decode_Button_clicked() {
    ui->textBrowser->clear();
    ui->Complete_Decode_Label->close();
    ui->Wrong_Code_Label_2->close();
    if (ui->plainTextEdit->toPlainText() != "") {
        HuffmanTree huffmanTree;
        loadTree(huffmanTree);
        string result = huffmanTree.Decode(ui->plainTextEdit->toPlainText().toStdString());
        if (result != "´íÎó") {
            ui->textBrowser->setPlainText(QString::fromStdString(result));
            ui->Complete_Decode_Label->show();
        } else ui->Wrong_Code_Label_2->show();
    } else {
        ui->plainTextEdit->setStyleSheet(
                "QLineEdit{border-radius:8px;background-color:white;border:2px solid rgb(242, 115, 121)}"
        );
        ui->Not_Null_Label->show();
    }
}

void Receiver_interface::on_plainTextEdit_textChanged() {
    this->ui->Not_Null_Label->close();
}

void Receiver_interface::on_Code_Decode_Button_clicked() {
    char codeString[20000] = {0};
    string codePath = "code.txt";
    ReadFile(codePath, codeString);
    this->ui->plainTextEdit->setPlainText(QString::fromStdString(codeString));
    on_Straight_Decode_Button_clicked();
}

void Receiver_interface::on_Change_Button_clicked() {
    Sender_interface *senderInterface = new Sender_interface;
    this->close();
    senderInterface->show();
}

void Receiver_interface::on_Load_Tree_Button_clicked() {
    QString string1;
    HuffmanTree tree;
    loadTree(tree);
    for (const auto &i: tree._code_mapTo_char) {
        string1 = QString::fromStdString(i.first + " = " + i.second);
        ui->textBrowser->append(string1);
    }
}

