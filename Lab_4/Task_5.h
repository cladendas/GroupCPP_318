#ifndef TASK_5_H
#define TASK_5_H

#include "Service_functions.h"

void create_array_of(const unsigned type, const size_t size) {
    if (type == 1) {
        char* char_array = new char[size];
        build_sort_show(char_array, size);
        delete[] char_array;
        char_array = nullptr;

    } else if (type == 2) {
        short* short_array = new short[size];
        build_sort_show(short_array, size);
        delete[] short_array;
        short_array = nullptr;

    } else if (type == 3) {
        int* int_array = new int[size];
        build_sort_show(int_array, size);
        delete[] int_array;
        int_array = nullptr;

    } else if (type == 4) {
        float* float_array = new float[size];
        build_sort_show(float_array, size);
        delete[] float_array;
        float_array = nullptr;

    } else if (type == 5) {
        double* double_array = new double[size];
        build_sort_show(double_array, size);
        delete[] double_array;
        double_array = nullptr;
    }
}

void task_5() {
    std::cout << "Выберите тип данных:\n";
    std::cout << "1-char \n2-short \n3-int \n4-float \n5-double\n";
    unsigned int type;
    std::cin >> type;

    if (std::cin.fail() || type > 5) {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cout << "Введены некорректные данные!\n";
    } else {
        std::cout << "Укажите размер массива: ";
        size_t size;
        std::cin >> size;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Введены некорректные данные!\n";
        } else {
            srand(time(NULL));
            create_array_of(type, size);
        }
    }
}

#endif // TASK_5_H
