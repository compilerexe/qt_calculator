#include "widget.h"
#include "ui_widget.h"

#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget),memory(""),number1(0),number2(0),fn_select(0)
{
    ui->setupUi(this);

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_btn_0_clicked()
{
    memory += "0";
    ui->lineEdit->setText(memory);
}

void Widget::on_btn_1_clicked()
{
    memory += "1";
    ui->lineEdit->setText(memory);
}

void Widget::on_btn_2_clicked()
{
    memory += "2";
    ui->lineEdit->setText(memory);
}

void Widget::on_btn_3_clicked()
{
    memory += "3";
    ui->lineEdit->setText(memory);
}

void Widget::on_btn_4_clicked()
{
    memory += "4";
    ui->lineEdit->setText(memory);
}

void Widget::on_btn_5_clicked()
{
    memory += "5";
    ui->lineEdit->setText(memory);
}

void Widget::on_btn_6_clicked()
{
    memory += "6";
    ui->lineEdit->setText(memory);
}

void Widget::on_btn_7_clicked()
{
    memory += "7";
    ui->lineEdit->setText(memory);
}

void Widget::on_btn_8_clicked()
{
    memory += "8";
    ui->lineEdit->setText(memory);
}

void Widget::on_btn_9_clicked()
{
    memory += "9";
    ui->lineEdit->setText(memory);
}

void Widget::on_btn_dot_clicked()
{
    memory += ".";
    ui->lineEdit->setText(memory);
}

void Widget::on_btn_result_clicked()
{
    double process = 0; //Create variable process number1 and number2

    QString sum; //Create string result show in display

    number2 = memory.toDouble();//Converse number2 to double

    if(fn_select == 1){ //If select function
        process = number1 + number2;
    }else if(fn_select == 2){
        process = number1 + number2;
    }else if(fn_select == 3){
        process = number1 + number2;
    }else if(fn_select == 4){
        process = number1 + number2;
    }

    if(process != 0){ //If select function true
        sum = QString::number(process); //Converse double name process to string
        ui->lineEdit->setText(sum); //Display sum in QLineEdit
        qDebug() << number2; //Debug message
        qDebug() << "result = " << process; //Debug message
    }

}

void Widget::on_btn_fn1_clicked()
{

    fn_select = 1; // Set value select function

    number1 = memory.toDouble(); // Converse string to double, program have decimal

    memory = ""; // Clear variable

    ui->lineEdit->setText(""); // Clear QLineEdit

    qDebug() << number1 << " + "; // Show debug message

}

void Widget::on_btn_fn2_clicked()
{
    fn_select = 2; // Set value select function

    number1 = memory.toDouble(); // Converse string to double, program have decimal

    memory = ""; // Clear variable

    ui->lineEdit->setText(""); // Clear QLineEdit

    qDebug() << number1 << " - "; // Show debug message
}

void Widget::on_btn_fn3_clicked()
{
    fn_select = 3; // Set value select function

    number1 = memory.toDouble(); // Converse string to double, program have decimal

    memory = ""; // Clear variable

    ui->lineEdit->setText(""); // Clear QLineEdit

    qDebug() << number1 << " * "; // Show debug message
}

void Widget::on_btn_fn4_clicked()
{
    fn_select = 4; // Set value select function

    number1 = memory.toDouble(); // Converse string to double, program have decimal

    memory = ""; // Clear variable

    ui->lineEdit->setText(""); // Clear QLineEdit

    qDebug() << number1 << " / "; // Show debug message
}

void Widget::on_btn_clear_clicked()
{
    fn_select = 0; // Clear variable function

    memory = ""; // Clear variable text

    ui->lineEdit->setText(""); // Clear display

    qDebug() << "Clear Success"; // Show message debug
}
