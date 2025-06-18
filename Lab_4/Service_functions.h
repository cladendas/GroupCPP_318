#ifndef SERVICE_FUNCTIONS_H
#define SERVICE_FUNCTIONS_H

/*
Собраны функции, для работы с массивами и получения случайного числа
*/

// получение случайного числа в указанном диапазоне
int get_number(int start, int end) {
    return rand() % (end - start + 1) + start;
}

void show_arr(auto* arr, size_t size) {
    for(size_t i = 0; i < size; i++) {
        std::cout << arr[i] << '\n';
    }
}

void build_arr(auto* arr, size_t size) {
    for(size_t i = 0; i < size; i++) {
        arr[i] = rand() ;
    }
}

void sort_arr(auto* arr, size_t size) {
    for(size_t i = 0; i < size; i++) {
        for (size_t j = i; j < size; j++) {
            if (arr[i] > arr[j]) {
                std::swap(arr[j], arr[i]);
            }
        }
    }
}

//чтобы всё сделать из одной функции
void build_sort_show(auto* arr, size_t size) {
    build_arr(arr, size);
    sort_arr(arr, size);
    show_arr(arr, size);
}

#endif // SERVICE_FUNCTIONS_H
