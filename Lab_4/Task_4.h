#ifndef TASK_4_H
#define TASK_4_H

unsigned short get_factorial_with_loop(unsigned short num) {
    unsigned short result = 1;
    for(size_t i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

unsigned short get_factorial_with_recursion(unsigned short num) {
    if (num == 1) {
        return 1;
    } else {
        return num * get_factorial_with_recursion(num - 1);
    }
}

void task_4() {
    {
        std::cout << "Программа, которая выводит факториал\n";
        unsigned short num;
        std::cout << "Введите положительное целое число: ";
        std::cin >> num;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Введены некорректные данные!\n";
        } else {

            unsigned result_loop = get_factorial_with_loop(num);
            std::cout << "Результат работы цикла: " << result_loop << '\n';

            unsigned result_recursion = get_factorial_with_recursion(num);
            std::cout << "Результат работы рекурсии: " << result_recursion << "\n\n";
        }
    }

    //////////////////////////////////////////////////////////////////////////

    {
        std::cout << "Программа, которая вычисляет число Фибоначчи, соответствующее заданному пользователем номеру.\n";
        unsigned short num;
        std::cout << "Введите положительное целое число: ";
        std::cin >> num;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Введены некорректные данные!\n";
        } else {
            unsigned int tmp_first = 0;
            unsigned int tmp_second = 0;
            for(size_t i = 0; i < num; i++) {
                if (i == 0) {
                    std::cout << i << ' ';
                    tmp_first = 1;
                    tmp_second = 1;
                } else {
                    std::cout << tmp_first << ' ';

                    unsigned int tmp_num = tmp_second;
                    tmp_second += tmp_first;
                    tmp_first = tmp_num;
                }
            }
        }
        std::cout << "\n\n";
    }

    //////////////////////////////////////////////////////////////////////////

    {
        std::cout << "Программа, которая выводит пирамиду\n";
        std::cout << "Введите положительное целое число: ";
        unsigned short num;
        std::cin >> num;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Введены некорректные данные!\n";
            return;
        } else {
            unsigned int result = 0;
            unsigned int count = 1;
            while (result < num) {
                for (size_t j = 1; j <= count; j++) {
                    std::cout << j << ' ';
                }
                result = count * (count + 1) / 2;
                std::cout << " - " << result << '\n';
                count++;
            }
            std::cout << "\n\n";
        }
    }
}

#endif // TASK_4_H
