//
// Created by 16531 on 2023/12/20.
//

#ifndef PROGRAMDESIGN_HUFFMANCODING_MAINWINDOW_H
#define PROGRAMDESIGN_HUFFMANCODING_MAINWINDOW_H

#include <QWidget>
#include <QMainWindow>
#include "ui_mainwindow.h"


QT_BEGIN_NAMESPACE
namespace Ui { class mainwindow; }
QT_END_NAMESPACE

class mainwindow : public QMainWindow {
Q_OBJECT

private slots:

    void on_Close_Button_clicked();

    void on_Hide_Button_clicked();

    void on_Sender_Button_clicked();

    void on_Receiver_Button_clicked();

public:
    explicit mainwindow(QWidget *parent = nullptr);

    ~mainwindow();

private:
    Ui::mainwindow *ui;
};


#endif //PROGRAMDESIGN_HUFFMANCODING_MAINWINDOW_H
