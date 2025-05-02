#ifndef TASK_5_H
#define TASK_5_H

#endif // TASK_5_H

/*
Задание 5.
Создайте функции поиска максимума, минимума в функциях два параметра типа int.
Перегрузите функции максимума и минимума параметры которых unsigned short.
Перегрузите функции максимума и минимума в которых три параметра типа int: минимум,
максимум, порог ограничения на максимум и минимум соответственно.
Запросите пользователя ввести числа и вычислите максимум и минимум.
*/

void max_min(const int a, const int b) {
    if (a > b) {
        std::cout << a << " больше " << b << '\n';
    } else if (a < b) {
        std::cout << b << " больше " << a << '\n';
    } else if (a == b) {
        std::cout << a << " равно " << b << '\n';
    }
}

void max_min(const short a, const short b) {
    if (a > b) {
        std::cout << a << " больше " << b << '\n';
    } else if (a < b) {
        std::cout << b << " больше " << a << '\n';
    } else if (a == b) {
        std::cout << a << " равно " << b << '\n';
    }
}

void max_min(const int a, const int b, const int c) {
    if (a <= c || b <= c) {
        std::cout << "Одно из значений должно быть больше " << c << '\n';
    } else if (a > b) {
        std::cout << a << " больше " << b << '\n';
    } else if (a < b) {
        std::cout << b << " больше " << c << '\n';
    } else if (a == b) {
        std::cout << a << " равно " << b << '\n';
    }
}

void task_5() {
#if 0
    std::cout << "Введите два числа: ";
    int a;
    int b;
    std::cin >> a >> b;
    max_min(a, b);
#endif

#if 0
    std::cout << "Введите два числа: ";
    short a;
    short b;
    std::cin >> a >> b;
    max_min(a, b);
#endif

#if 1
    std::cout << "Введите три числа: ";
    int a;
    int b;
    int c;
    std::cin >> a >> b >> c;
    max_min(a, b, c);
#endif
}
