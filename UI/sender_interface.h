//
// Created by 16531 on 2024/1/12.
//

#ifndef PROGRAMDESIGN_HUFFMANCODING_SENDER_INTERFACE_H
#define PROGRAMDESIGN_HUFFMANCODING_SENDER_INTERFACE_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class Sender_interface; }
QT_END_NAMESPACE

class Sender_interface : public QWidget {
Q_OBJECT

private slots:

    void on_Close_Button_clicked();

    void on_Hide_Button_clicked();

    void on_Straight_Encode_Button_clicked();

    void on_plainTextEdit_textChanged();

    void on_Data_Encode_Button_clicked();

    void on_Open_FileFolder_clicked();

    void on_Change_Button_clicked();

//    void on_Binary_Encode_Button_clicked();

public:
    explicit Sender_interface(QWidget *parent = nullptr);

    ~Sender_interface() override;

private:
    Ui::Sender_interface *ui;


};


#endif //PROGRAMDESIGN_HUFFMANCODING_SENDER_INTERFACE_H
