#ifndef TASK_6_H
#define TASK_6_H

void task_6_a() {
    int m;
    float fx;
    std::string cht;
    std::cout << "Введите целое число, число с точкой, символ: ";
    std::cin >> m >> fx >> cht;

    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cout << "Введены некорректные данные!\n";
        return;
    }

    std::cout << "Использование & оператор:\n";
    std::cout << "-----------------------\n";
    std::cout << "адрес m = " << &m << '\n';
    std::cout << "адрес fx = " << &fx << '\n';
    std::cout << "адрес cht = " << &cht << '\n';
    std::cout << '\n';

    std::cout << "Используя операторы & и *:\n";
    std::cout << "-----------------------------\n";
    int* p_m = &m;
    float* p_fx = &fx;
    std::string* p_cht = &cht;
    std::cout << "значение по адресу m = " << *(&m) << '\n';
    std::cout << "значение по адресу fx = " << *(&fx) << '\n';
    std::cout << "значение по адресу cht = " << *(&cht) << '\n';
    std::cout << '\n';

    std::cout << "Используя только переменную указателя:\n";
    std::cout << "----------------------------------\n";
    std::cout << "адрес m = " << p_m << '\n';
    std::cout << "адрес fx = " << p_fx << '\n';
    std::cout << "адрес cht = " << p_cht << '\n';
    std::cout << '\n';

    std::cout << "Использование только оператора указателя:\n";
    std::cout << "----------------------------------\n";
    std::cout << "значение по адресу m = " << *p_m << '\n';
    std::cout << "значение по адресу fx = " << *p_fx << '\n';
    std::cout << "значение по адресу cht = " << *p_cht << '\n';
    std::cout << '\n';
}

void task_6_b() {
    unsigned int size;
    std::cout << "Введите кол-во элементов в массиве: ";
    std::cin >> size;

    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cout << "Введены некорректные данные!\n";
        return;
    }

    unsigned int* array = new unsigned int[size];

    for(size_t i = 0; i < size; i++) {
        array[i] = rand() % 10;
    }

    for(size_t i = 0; i < size; i++) {
        std::cout << "array[i] - " << array[i] << " - (array + i) - " << (array + i) << " - *(array + i) - " << *(array + i) << '\n';
    }

    delete[] array;
    array = nullptr;
}

void task_6() {
    // task_6_a();
    task_6_b();
}

#endif // TASK_6_H
