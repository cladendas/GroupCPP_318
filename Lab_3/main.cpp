
/*
* Lab_3
* Исследование функций С++ в IDE (интегрированной среде разработки) Qt Creator
*
* Developer: Агамагомедов Вадим Вагифович
* OS: MacOS
* locale: UTF-8
*/

#include "mainwindow.h"

#include <QApplication>
#include <iostream>
#include <stdio.h>

#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_4.h"
#include "task_5.h"
#include "task_6.h"
#include "task_7.h"

int main(int argc, char *argv[])
{

#if 0
    task_1(); //вероятность вытащить туз из 52 карт
#endif

#if 0
    task_2(); //вероятность вытащить туз из 52 карт
#endif

#if 0
    task_3(); // про инициализацию
#endif

#if 0
    task_4(); // про перечисления
#endif

#if 0
    task_5(); // поиск максимума и минимума
#endif

#if 0
    task_6(); // преобразование типов
#endif

#if 0
    task_7(); // лифт
#endif

#if 1
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
#endif

}
