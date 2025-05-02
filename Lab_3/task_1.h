#ifndef TASK_1_H
#define TASK_1_H

#endif // TASK_1_H



/*
Задание 1.
a) В колоде 52 карты. Мы решили вытащить из неё одну — найдите вероятность того, что это
будет туз.
b) Вы бросаете игральные кости с шестью сторонами. Найдите вероятность того, что сумма
выпавших очков будет равна 7.
c) Ребенок играет с четырьмя буквами разрезной азбуки А, А, М, М. Какова вероятность
того, что при случайном расположении букв в ряд он получит слово «МАМА»?
*/

void get_ace() {
    constexpr int number = 52;
    constexpr float probability = 4 / static_cast<float>(number);
    printf("Вероятность вытащить туз %.2f \n", probability);
}

void get_seven() {
    printf("Неизвестна вероятность выпадения, ведь зависит от кол-ва кубиков\n");
}

//для получения кол-ва комбинаций
int factorial(int num) {
    if (num == 0) {
        return 1;
    }

    return num * factorial(num - 1);
}

void get_mama() {
    float tmp = static_cast<float>(1) / factorial(4);
    printf("Вероятность, что будет выведено МАМА %.2f \n", tmp);
}

void task_1() {
    get_ace();
    get_seven();
    get_mama();
}
