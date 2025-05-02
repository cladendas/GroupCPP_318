#include "mainwindow.h"
#include "ui_mainwindow.h"

//генерация кода для обработки нажатия цифр
#define BUTTON_DIGITS_NUMBERS(number) connect(ui->pushButton_##number, SIGNAL(clicked()), this, SLOT(digits_numbers()));

double num_first; // для хранения введённого пользователем числа

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    BUTTON_DIGITS_NUMBERS(0)
    BUTTON_DIGITS_NUMBERS(1)
    BUTTON_DIGITS_NUMBERS(2)
    BUTTON_DIGITS_NUMBERS(3)
    BUTTON_DIGITS_NUMBERS(4)
    BUTTON_DIGITS_NUMBERS(5)
    BUTTON_DIGITS_NUMBERS(6)
    BUTTON_DIGITS_NUMBERS(7)
    BUTTON_DIGITS_NUMBERS(8)
    BUTTON_DIGITS_NUMBERS(9)

    connect(ui->pushButton_plus_minus, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_percent, SIGNAL(clicked()), this, SLOT(operations()));

    connect(ui->pushButton_plus, SIGNAL(clicked()), this, SLOT(on_math_operations()));
    connect(ui->pushButton_minus, SIGNAL(clicked()), this, SLOT(on_math_operations()));
    connect(ui->pushButton_multiply, SIGNAL(clicked()), this, SLOT(on_math_operations()));
    connect(ui->pushButton_divide, SIGNAL(clicked()), this, SLOT(on_math_operations()));

    ui->pushButton_plus->setCheckable(true); // указание, что нажатие на данную кнопку нужно запоминать
    ui->pushButton_minus->setCheckable(true); // указание, что нажатие на данную кнопку нужно запоминать
    ui->pushButton_multiply->setCheckable(true); // указание, что нажатие на данную кнопку нужно запоминать
    ui->pushButton_divide->setCheckable(true); // указание, что нажатие на данную кнопку нужно запоминать
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digits_numbers() {

    QPushButton* button = (QPushButton*) sender();

    double all_numbers;
    QString new_label;

    if (ui->result_show->text().contains('.') && button->text() == "0") {
        new_label = ui->result_show->text() + button->text();
    } else {
        all_numbers = (ui->result_show->text() + button->text()).toDouble();
        new_label = QString::number(all_numbers, 'g', 15);
    }

    ui->result_show->setText(new_label);
}

void MainWindow::on_pushButton_dot_clicked()
{
    if (!(ui->result_show->text().contains('.'))) {
        ui->result_show->setText(ui->result_show->text() + '.');
    }
}


void MainWindow::operations() {
    QPushButton* button = (QPushButton*) sender();

    double all_numbers;
    QString new_label;

    if (button->text() == "+/-") {
        all_numbers = (ui->result_show->text()).toDouble() * (-1);
    } else if (button->text() == "%") {
        all_numbers = (ui->result_show->text()).toDouble() * 0.01;
    }


    new_label = QString::number(all_numbers, 'g', 15); // для превращения числа в строку
    ui->result_show->setText(new_label);
}


void MainWindow::on_pushButton_ac_clicked()
{
    ui->pushButton_plus->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_multiply->setChecked(false);
    ui->pushButton_divide->setChecked(false);

    ui->result_show->setText("");
}

void MainWindow::on_math_operations()
{
    QPushButton* button = (QPushButton*) sender();

    num_first = ui->result_show->text().toDouble();
    ui->result_show->setText("");

    button->setChecked(true); //чтобы можно было отследить, какая кнопка была нажата
}

void MainWindow::on_pushButton_equal_clicked()
{
    double label_number;
    double num_second = ui->result_show->text().toDouble();;

    QString new_label;

    if (ui->pushButton_plus->isChecked()) {
        label_number = num_first + num_second;
        ui->pushButton_plus->setChecked(false);
    } else if (ui->pushButton_minus->isChecked()) {
        label_number = num_first - num_second;
        ui->pushButton_minus->setChecked(false);
    } else if (ui->pushButton_multiply->isChecked()) {
        label_number = num_first * num_second;
        ui->pushButton_multiply->setChecked(false);
    } else if (ui->pushButton_divide->isChecked()) {
        if (num_second == 0) {
            label_number = 0;
        } else {
            label_number = num_first / num_second;
        }
        ui->pushButton_divide->setChecked(false);
    }

    new_label = QString::number(label_number, 'g', 15); // для превращения числа в строку
    ui->result_show->setText(new_label);
}



