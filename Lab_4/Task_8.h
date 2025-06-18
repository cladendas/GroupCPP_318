#ifndef TASK_8_H
#define TASK_8_H

//в этом задании подошли бы лямбда-выражения, но в задании указано, что нужно именно реализовать функции

bool and_operation(int a, int b) {
    return a && b;
}

bool or_operation(int a, int b) {
    return a || b;
}

bool xor_operation(int a, int b) {
    return a ^ b;
}

void result(std::function<bool(int, int)> operation, int a, int b) {
    std::cout << std::boolalpha;
    std::cout << operation(a, b) << '\n';
}

void task_8() {
    unsigned operation;
    std::cout << "Выберите операцию:\n"
              << "1-И\n2-ИЛИ\n3-XОR"
              << '\n';
    std::cin >> operation;

    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cout << "Введены некорректные данные!\n";
        return;
    }

    int a, b;
    std::cout << "Введите два целых числа: ";
    std::cin >> a >> b;

    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cout << "Введены некорректные данные!\n";
        return;
    }

    if (operation == 1) {
        result(and_operation, a, b);
    } else if (operation == 2) {
        result(or_operation, a, b);
    } else if (operation == 3) {
        result(xor_operation, a, b);
    }
}

#endif // TASK_8_H
