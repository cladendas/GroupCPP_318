# Найдите ошибки в программах и исправьте их, напишите результат вывода программ
# a) 🟥
```cpp
void main( {
short array[]{1,3,5,7,9};
short *ptr = array;
ptr = 111;
for (int i = 0; i < sizeof(array); ++i)
std::cout << " Значение элемента " << i << ": " << array +i << '\n';
}
```

## a) 🟩
```cpp
#include <iostream>

int main() {
    short array[]{1,3,5,7,9};
    short *ptr = array;

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i) {
        std::cout << " Значение элемента " << i << ": " << *(array + i) << '\n';
    }
  
  	return 0;
}

// Значение элемента 0: 1
// Значение элемента 1: 3
// Значение элемента 2: 5
// Значение элемента 3: 7
// Значение элемента 4: 9
```

# b) 🟥
```cpp
int main() {
int array[size]{1,3,5,7,9};
Func(&array, size);
}
void Func(int *ptr, int size) {
for (int i = 0; i < size; ++i)
std::cout << " Значение элемента " ББ<< ptr[i] << '\n';
std::cout << " Адрес элемента " << ptr[i << '\n';
}
```

## b) 🟩
```cpp
#include <iostream>

void func(int *ptr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << " Значение элемента " << ptr[i] << '\n';
        std::cout << " Адрес элемента " << &ptr[i] << '\n';
    }
}

int main() {
    constexpr int size = 5;
    int array[size]{1,3,5,7,9};
    func(array, size);
  
    return 0;
}

// Значение элемента 1
// Адрес элемента 0x16bb2e520
// Значение элемента 3
// Адрес элемента 0x16bb2e524
// Значение элемента 5
// Адрес элемента 0x16bb2e528
// Значение элемента 7
// Адрес элемента 0x16bb2e52c
// Значение элемента 9
// Адрес элемента 0x16bb2e530
```

# c) 🟥
```cpp
#include <iostream>
int main() {
short value;

short *p;
p = value;
*p = value;
*p = &value;
*p = *&value;
}
```

## c) 🟩
```cpp
#include <iostream>

int main() {
    short value;

    short *p;
    p = &value;
    *p = value;
    p = &value;
    *p = *&value;
}

//этот код ничего не выводит
```

# d) 🟥
```cpp
#include <iostream>
int main() {
char cvalue;
int ivalue;
short * ps;
char *pc;
void *pv {(int*)(cvalue)};
void *pv_1 {(char*)(&ivalue)};
std::cout << "pv->int" << *static_cast<int>(pv) << std::endl;
int *pi = {(int)(pv)};
std::cout << "pi=" << pv_1 << std::endl;
}
```

## d) 🟩
```cpp
#include <iostream>

int main() {
    char cvalue = 'A';
    int ivalue = 999;
    void *pv {(char*)(&cvalue)};
    void *pv_1 {(int*)(&ivalue)};
    std::cout << "pv->int" << *static_cast<int*>(pv) << std::endl;
    int *pi = {(int*)(pv)};
    std::cout << "pi=" << pv_1 << std::endl;
}

// pv->int-1859415999
// pi=0x16d912538
```

# e) 🟥
```cpp
#include <iostream>
int main() {
short value, value1(3);
short &ref;
const short &ref1 = value;
const short &ref2 = 78;
ref1 = 3;
*&value = 4;
const *short const p3;
}
```

## e) 🟩
```cpp
#include <iostream>

int main() {
    short value, value1(3);
    short& ref = value;

    const short& ref1 = value;
    const short& ref2 = 78;
    ref = 3;
    *&value = 4;

    const short* const p3 = &value;
}

//этот код ничего не выводит
```

# f) 🟥
```cpp
int main() {
short value = 13;
short value_1 = 100;
short *ptr = &value;
std::cout << &value << '\n';
std::cout << (value +=1) << '\n';
ptr = 9;
std::cout << (value = value_1 + *ptr) << '\n';
std::cout << "Результат: " << value << '\n';
}
```

## f) 🟩
```cpp
#include <iostream>

int main() {
    short value = 13;
    short value_1 = 100;
    short *ptr = &value;
    std::cout << &value << '\n';
    std::cout << (value +=1) << '\n';
    *ptr = 9;
    std::cout << (value = value_1 + *ptr) << '\n';
    std::cout << "Результат: " << value << '\n';
}

// 0x16fb2653e
// 14
// 109
// Результат: 109
```

# Исправьте ошибки можно что-то добавлять а удалять нельзя
# g) 🟥
```cpp
int main() {
int value1 45;
int value 63;
int *ptr = &value;
*ptr = &value;
ptr = value;
std::cout << "Результат value1 + value2 : " << value1 + ptr << '\n';
}
```

## g) 🟩
```cpp
#include <iostream>

int main() {
    int value1 {45};
    int value {63};
    int *ptr = &value;
    *ptr = *(&value);
    ptr = &value;
    std::cout << "Результат value1 + value2 : " << value1 + *ptr << '\n';
}

// Результат value1 + value2 : 108
```
# Исправьте ошибки можно что-то добавлять а удалять нельзя. Что выведет программа
# a) 🟥
```cpp
int main() {
std::cout << "Hi !\n";
exit;
std::cout << 3
}
```

## a) 🟩
```cpp
#include <iostream>

int main() {
    std::cout << "Hi !\n";
    exit(0);
    std::cout << 3 << '\n';
}

// Hi !
```

# b) 🟥
```cpp
int main() {
switch (2) {
case 1
std::cout << 1 << '\n';
case 2
std::cout << 2 << '\n'
case
std::cout << 3 << '\n';
case 4
std::cout << 4 << '\n'
default:
std::cout << 5 << '\n';
```

## b) 🟩
```cpp
#include <iostream>

int main() {
    switch (2) {
        case 1:
            std::cout << 1 << '\n';
            break;
        case 2:
            std::cout << 2 << '\n';
            break;
        case 3:
            std::cout << 3 << '\n';
            break;
        case 4:
            std::cout << 4 << '\n';
            break;
        default:
            std::cout << 5 << '\n';
    }
}

// 2
```


# c) 🟥
```cpp
#include <iostream>
const int size = 5;
void Func(int ptr, int size) {
for (int i = 0; i < size; ++i)
std::cout << ptr[i] << '\n'; // вывод элементов масива в цикле
ptr = 5; // первому элементу массива присваиваем значение 5
std::cout << '\n';
for (int i = 0; i < size; ++i)
std::cout << *ptr++ << '\n'; // вывод элементов масива в цикле
*ptr = 55; // первому элементу массива присваиваем значение 55
std::cout << '\n';
}
int main() {
int array[];
Func(array, size);
for (int i = 0; i < size; ++i)
std::cout << array[i] << '\n';
}
```

## c) 🟩
```cpp
#include <iostream>

const int size = 5;
void Func(int* ptr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << ptr[i] << '\n'; // вывод элементов масива в цикле
    }

    ptr[0] = 5; // первому элементу массива присваиваем значение 5
    std::cout << '\n';

    for (int i = 0; i < size; ++i) {
        std::cout << *ptr++ << '\n'; // вывод элементов масива в цикле
    }

    ptr -= size;
    *(&ptr[0]) = 55; // первому элементу массива присваиваем значение 55
    std::cout << '\n';
}

int main() {
    int array[size] = {1, 2, 3, 4, 5};

    Func(array, size);

    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << '\n';
    }
}

// 1
// 2
// 3
// 4
// 5

// 5
// 2
// 3
// 4
// 5

// 55
// 2
// 3
// 4
// 5
```
