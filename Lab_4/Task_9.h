#ifndef TASK_9_H
#define TASK_9_H

void swap_castom(char* array, size_t size) {
    for(size_t i = 0; i < size; i++) {
        std::cout << static_cast<int>(array[i]) << ' ';
    }

     std::cout << '\n';

    for(size_t i = 0; i < size - 1; i += 2) {
        std::swap(array[i], array[i + 1]);
    }

    for(size_t i = 0; i < size; i++) {
        std::cout << static_cast<int>(array[i]) << ' ';
    }
}

void task_9() {
    constexpr size_t size = 12;
    char array[size];

    for(size_t i = 0; i < size; i++) {
        array[i] = i + 1;
    }

    swap_castom(array, size);
}

#endif // TASK_9_H
