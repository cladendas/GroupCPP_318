#ifndef TASK_6_H
#define TASK_6_H

#endif // TASK_6_H

/*
Задание 6.
Сделайте преобразованием типов: явного (static_cast, С-style cast), неявного. Следующих
арифметических выражений:
Тип переменных : int x; float y; double z; unsigned short k;
1) int i = (x+y)*z+k ;
2) k = x-y/z ;
3) z = x*y+z/x;
4) unsigned int ui = x/y+k;
5) short s = x%(x/y)
*/

void task_6() {
    int x;
    float y;
    double z;
    unsigned short k;
    int i = (x + int(y)) * z + static_cast<int>(k);
    k = x - y / z ;
    z = x * y + z / x;
    unsigned int ui = x / y + k;
    short s = x % (x / int(y));
}
