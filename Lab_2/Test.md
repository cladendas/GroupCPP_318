
# 1. Найдите в программе ошибки, представите ниже рабочий вариант программы.
```ccpp
nt main() {
short a;
a(65599);
int 5 = 4;
int л = 4;
char ch;
ch{5};
float f;
f = 3,2;
}}
```
## 1. решение
```cpp
int main() {
    short a(65599);
    
    int b = 4;
    int c = 4;
    
    char ch{5};
    
    float f;
    f = 3.2;

    return 0;
}
```

# 2. Какие значения выводит эта программа?
## а) Почему z выводит неожиданные значения?
```cpp
#include <iostream>
int main() {
int x = 5;
x = x - 2;
//a
std::cout << x << std::endl; // 3, потому что 5 - 2
int y = x;
//b
std::cout << y << std::endl; // 3, потому что y = x
//c
std::cout << x + y << std::endl; // 6, потому что 3 + 3
//d
std::cout << x << std::endl; // 3, потому что 5 - 2
int z;
//e
std::cout << z << std::endl; // мусор, потому что z не инициализирована
}
```
## b)
```cpp
#include <iostream>
int main() {
int x = 1;
x = x++;

std::cout << x << "\n"; // 1, но это неопределённое поведение
}
```
## c)
```cpp
#include <iostream>
int main(){
int x = 1;
std::cout << ++x << "\n";
}
```
# 3. Найдите в программе ошибки, можно только что-то добавлять убирать нельзя, и выведите результат.
## a)
```cpp
const int option_1 = 0;
const int option_2 = 1;
const int option_3 = 2;
const int option_4 = 3;
const int option_5 = 4;
const int option_6 = 5;
const int option_7 = 6;
const int option_8{7};
int main( {
bitset<8> bits(0x4);
bits.set(option_1);
bits.flip(option_3);
bits.reset(option_7);
cin << "Bit 1 has value: " << bits.test(option_1) << '/n';
cin << Bit 3 has value: " << bits.test() << '\n';
cin << "Bit 7 has value: " << bits.test() < '\n';
cin<< "All the bits: " << bits << '\n;
}
```
### a) решение
```cpp
#include <iostream>
#include <bitset>

const int option_1 = 0;
const int option_2 = 1;
const int option_3 = 2;
const int option_4 = 3;
const int option_5 = 4;
const int option_6 = 5;
const int option_7 = 6;
const int option_8{7};
int main() {
    std::bitset<8> bits(0x4);
    bits.set(option_1);
    bits.flip(option_3);
    bits.reset(option_7);
    std::cout << "Bit 1 has value: " << bits.test(option_1) << '\n';
    std::cout << "Bit 3 has value: " << bits.test(option_3) << '\n';
    std::cout << "Bit 7 has value: " << bits.test(option_7) << '\n';
    std::cout << "All the bits: " << bits << '\n';
}
```

## b)
```cpp
int main()
uint8_t a(1), b(1), c(3
a = a < 1;
printf("a: \n", a)
b <<= 1;
printf("b: %d \n", b);
c |= 1;
print("c: \n", c);
```

### b) решение
```cpp
#include <stdio.h>

int main() {
    uint8_t a(1), b(1), c(3);
    a = a < 1;
    printf("a: %d\n", a);
    b <<= 1;
    printf("b: %d\n", b);
    c |= 1;
    printf("c: %d\n", c);
}
```

## c)
```cpp
int main() {
int x (08);
std::cout << "x: " << x < endl;
int y = 0x5;
std::cout << "y: " < y << std::endl;
int bin(0);
bin = 0b101;
out << "bin 0b101: " << bin << std::endl
}
```
### c) решение
```cpp
#include <iostream>

int main() {
    int x(8);
    std::cout << "x: " << x << std::endl;
    int y = 0x5;
    std::cout << "y: " << y << std::endl;
    int bin(0);
    bin = 0b101;
    std::cout << "bin 0b101: " << bin << std::endl;
}
```
## d)
```cpp
int main() {
int x{8};
std::cout << "hex: " << h << x << ndl;
std::cout << "oct: " << o<< x << std::endl;
out << "dec: " << dec << x << std::endl;
}
```
### d) решение
```cpp
int main() {
int x{8};
std::cout << "hex: " << h << x << ndl;
std::cout << "oct: " << o<< x << std::endl;
out << "dec: " << dec << x << std::endl;
}
```
# 4 Вычислите следующие выражения c использованием С++.
## a)  (true или false):
```cpp
(true && true) || false // true
(false && true) || true // true

(false && true) || false || true // true
(5 > 6 || 4 > 3) && (7 > 8) // false
!(7 > 6 || 3 > 4) // false
```
## b) Какой результат 0110 >> 2 в двоичной системе счисления?
### b) решение: 0011
## c) Какой результат 5 & 12 в десятичной системе счисления?
### c) решение: 4
## d) Какой результат 5 ^ 12 в десятичной системе счисления?
### d) решение: 9
# 5 Конвертируйте двоичное число 0100 1101 в десятичную систему счисления.
## 5) решение: 77
