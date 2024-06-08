//
// Created by 16531 on 2023/12/20.
//

// You may need to build the project (run Qt uic code generator) to get "ui_mainwindow.h" resolved

#include "mainwindow.h"
#include "sender_interface.h"
#include "receiver_interface.h"

mainwindow::mainwindow(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::mainwindow) {
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    setStyleSheet("border-radius:15px;");

}

mainwindow::~mainwindow() {
    delete ui;
}

void mainwindow::on_Close_Button_clicked() {
    this->close();
}


void mainwindow::on_Hide_Button_clicked() {
    this->showMinimized();
}

void mainwindow::on_Sender_Button_clicked() {
    Sender_interface *senderInterface = new Sender_interface;
    this->close();
    senderInterface->show();

}

void mainwindow::on_Receiver_Button_clicked() {
    Receiver_interface *receiverInterface = new Receiver_interface;
    this->close();
    receiverInterface->show();
}