#ifndef TASK_2_H
#define TASK_2_H

#endif // TASK_2_H


/*
Задание 2.
С какими аргументами (количеством) можно вызывать данную функцию void printChar(int
a=’a’, char b=’b’, char c=’c’, char d=’d’), тк определены все параметры по умолчанию,
приведите все варианты вызова функции printChar().
*/

void task_2() {
    printf("Данную функцию void printChar(int a = ’a’, char b = ’b’, char c = ’c’, char d = ’d’) --- можно вызвать следующими способами\n");
    printf("void printChar()\n");
    printf("void printChar(’a’)\n");
    printf("void printChar(’a’, ’b’)\n");
    printf("void printChar(’a’, ’b’, ’c’)\n");
    printf("void printChar(’a’, ’b’, ’c’, ’d’)\n");
    printf("- при использованнии аргументов по умолчанию, важно соблюдать порядок указания аргументов...\n");
    printf("- код ниже будет работать, но логически возможно не так, как ожидает программист:\n");
    printf("void printChar(’b’)\n");
    printf("void printChar(’d’, ’a’)\n");
    printf("void printChar(’c’, ’d’, ’a’)\n");
    printf("void printChar(’d’, ’c’, ’b’, ’a’)\n");
}
