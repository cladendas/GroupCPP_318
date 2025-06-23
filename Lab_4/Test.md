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
