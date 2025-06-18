/*
* Lab_4
* Исследование массивов, указателей, ссылок
*
* Developer: Агамагомедов Вадим Вагифович
* OS: MacOS
* locale: UTF-8
*/

#include <iostream>
#include <iterator>
#include <functional>

#include "Service_functions.h"

//подключение файлов с решениями
#include "Task_1.h"
#include "Task_2.h"
#include "Task_3.h"
#include "Task_4.h"
#include "Task_5.h"
#include "Task_6.h"
#include "Task_7.h"
#include "Task_8.h"
#include "Task_9.h"

enum class ProgrEnum {
    Task_1,
    Task_2,
    Task_3,
    Task_4,
    Task_5,
    Task_6,
    Task_7,
    Task_8,
    Task_9,
};

//выбор задачи
const ProgrEnum progrEnum = ProgrEnum::Task_9;

int main() {
    if (progrEnum == ProgrEnum::Task_1) { // здесь заполнение массива, поиск мин-макс-значений происходит в одном цикле
        task_1();
    } else if (progrEnum == ProgrEnum::Task_2) {
        task_2();
    } else if (progrEnum == ProgrEnum::Task_3) {
        task_3();
    } else if (progrEnum == ProgrEnum::Task_4) {
        task_4();
    } else if (progrEnum == ProgrEnum::Task_5) {
        task_5();
    } else if (progrEnum == ProgrEnum::Task_6) {
        task_6();
    } else if (progrEnum == ProgrEnum::Task_7) {
        task_7();
    } else if (progrEnum == ProgrEnum::Task_8) {
        task_8();
    } else if (progrEnum == ProgrEnum::Task_9) {
        task_9();
    }

    return 0;
}
