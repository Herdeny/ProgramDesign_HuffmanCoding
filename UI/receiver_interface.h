//
// Created by 16531 on 2024/1/12.
//

#ifndef PROGRAMDESIGN_HUFFMANCODING_RECEIVER_INTERFACE_H
#define PROGRAMDESIGN_HUFFMANCODING_RECEIVER_INTERFACE_H

#include <QWidget>
#include "../Program/system.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Receiver_interface; }
QT_END_NAMESPACE

class Receiver_interface : public QWidget {
Q_OBJECT
private slots:
    void on_Straight_Decode_Button_clicked();

    void on_plainTextEdit_textChanged();

    void on_Code_Decode_Button_clicked();

    void on_Change_Button_clicked();

    void on_Load_Tree_Button_clicked();

    void on_Close_Button_clicked();

    void on_Hide_Button_clicked();

public:
    explicit Receiver_interface(QWidget *parent = nullptr);

    ~Receiver_interface() override;

    void setText(QString const&);

private:
    Ui::Receiver_interface *ui;
};


#endif //PROGRAMDESIGN_HUFFMANCODING_RECEIVER_INTERFACE_H
