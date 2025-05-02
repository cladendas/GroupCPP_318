#ifndef TASK_3_H
#define TASK_3_H

#endif // TASK_3_H

/*
Задание 3.
Выполните в отдельной функции, Сopy initialization (копирующая инициализация), Direct
initialization (прямая инициализация), Uniform initialization, auto инициализацию следующих
типов данных:
int iValue
bool cValue
char cValue
long lValue

Используйте в объявлении прототипа этой функций trailing.
Объявите глобальную и локальную переменную типа int и с одним и тем же именем,
выведите на экран консоли глобальную и локальную переменную.
*/

int some_int = 42; // глобальная ппеременная

auto task_3() -> void {
    int i_some_value = 1212;
    int iValue = i_some_value; // Сopy initialization (копирующая инициализация)

    bool cValue = false; // Direct initialization (прямая инициализация)

    char chValue{'$'}; // Uniform initialization

    long lValue = 1231313;
    auto l_some_value = lValue; // auto


    int some_int = 99; // локальная переменная с именем, как у глобальной
    printf("global some_int = %d \n" , ::some_int);
    printf("local some_int = %d \n" , some_int);
}
