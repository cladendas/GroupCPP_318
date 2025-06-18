#ifndef TASK_2_H
#define TASK_2_H


void task_2() {
    constexpr unsigned height = 5;
    constexpr unsigned width = 5;

    //создание матрицы без сохранения в памяти
    std::cout << "Матрица с диагональнью из единиц" << '\n';
    for (size_t i = 0; i < height; ++i) {
        for (size_t j = 0; j < width; ++j) {
            if (i == j) {
                std::cout << 1 << ' ';
            } else {
                std::cout << 0 << ' ';
            }
        }
        std::cout << '\n';
    }

    std::cout << '\n';
    std::cout << "Исходная матрица -------------------------" << '\n';
    constexpr int start = -15;
    constexpr int end = 15;
    constexpr unsigned height_0 = 8;
    constexpr unsigned width_0 = 8;
    int array[height_0][width_0];
    //заполнение матрицы
    for (size_t i = 0; i < height_0; ++i) {
        for (size_t j = 0; j < width_0; ++j) {
            int tmp = get_number(start, end);
            array[i][j] = tmp;
            std::cout << array[i][j] << '\t';
        }
        std::cout << '\n';
    }

    //вывод значений, которые выше диагонали и их суммы
    std::cout << "Значения, которые выше диагонали -------------------------" << '\n';
    int result = 0;
    for (size_t i = 0; i < height_0; ++i) {
        for (size_t j = 0; j < width_0; ++j) {
            if (i < j) { // получение значений выше диагонали
                std::cout << array[i][j] << '\t';
                result += array[i][j];
            } else {
                std::cout << 0 << '\t';
            }
        }
        std::cout << '\n';
    }

    std::cout << "Сумма элементов выше диагонали: " << result << '\n';
}

#endif // TASK_2_H
