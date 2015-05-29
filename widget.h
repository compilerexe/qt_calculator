#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:


    void on_btn_0_clicked();

    void on_btn_1_clicked();

    void on_btn_2_clicked();

    void on_btn_3_clicked();

    void on_btn_4_clicked();

    void on_btn_5_clicked();

    void on_btn_6_clicked();

    void on_btn_7_clicked();

    void on_btn_8_clicked();

    void on_btn_9_clicked();

    void on_btn_dot_clicked();

    void on_btn_result_clicked();

    void on_btn_fn1_clicked();

    void on_btn_fn2_clicked();

    void on_btn_fn3_clicked();

    void on_btn_fn4_clicked();

    void on_btn_clear_clicked();

private:
    Ui::Widget *ui;

    QString memory; // Create variable memory text

    double number1,number2; // Create variable number 2 count

    int fn_select; // Create variable select function


};

#endif // WIDGET_H
