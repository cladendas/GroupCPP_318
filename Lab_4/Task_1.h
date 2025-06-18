#ifndef TASK_1_H
#define TASK_1_H

#endif // TASK_1_H

void task_1() {
    srand(time(NULL));
    constexpr int start = 11;
    constexpr int end = 100;
    constexpr unsigned size = 10;
    int array[size];

    int min;
    int max;

    std::cout << "Значения элементов массива (алгоритм)\n";
    for (size_t i = 0; i < size; ++i) {
        int tmp = get_number(start, end); //получение значения из диапазона
        if (i == 0) {
            min = tmp;
            max = tmp;
        } else {
            if (min > tmp) {
                min = tmp;
            } else if (max < tmp) {
                max = tmp;
            }
        }

        array[i] = tmp;
        std::cout << array[i] << ' ';
    }

    std::cout << '\n';
    std::cout << "Минимальное значение массива: " << min << '\n';
    std::cout << "Максимальное значение массива: " << max << '\n';
}
