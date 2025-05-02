#ifndef TASK_7_H
#define TASK_7_H

#endif // TASK_7_H

/*
Задание 7.
Разработайте программу с константами level (этаж) и предложите пользователю проехаться
на виртуальном лифте (пользователь вводит этаж с консоли или widget-приложения, от 0 до
7) по виртуальному торгово-развлекательному центру, значение этажей по вашему
усмотрению (парковка, кинотеатр и тд). Используйте варианты задания констант для
задания этажей (class enum or enum or const or macro). Причем выход из программы и поездки
по этажам, должен быть завершен только тогда, когда пользователь введет согласие «да» на
выход из торгового центра.
*/

enum class Floor: short {
    GROUND = 0,
    FIRST,
    SECOND,
    THIRD,
    FOURTH,
    FIFTH,
    SIXTH,
    SEVENTH,
};

void get_floor(Floor floor) {
    switch (floor) {
    case Floor::GROUND:
        std::cout << "Нижняя парковка\n";
        break;
    case Floor::FIRST:
        std::cout << "Первый этаж\n";
        break;
    case Floor::SECOND:
        std::cout << "Другой этаж\n";
        break;
    case Floor::THIRD:
        std::cout << "Не этаж\n";
        break;
    case Floor::FOURTH:
        std::cout << "Подэтаж\n";
        break;
    case Floor::FIFTH:
        std::cout << "Надэтаж\n";
        break;
    case Floor::SIXTH:
        std::cout << "Занято!!!\n";
        break;
    case Floor::SEVENTH:
        std::cout << "Верхняя парковка\n";
        break;
    default:
        break;
    }
}

void task_7() {

    // выход из цикла только после введения "да" на вопрос "Выйти из центра? "
    while(true) {
        std::cout << "Введите номер этажа: ";
        unsigned short floor;
        std::cin >> floor;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Введены некорректные данные!\n";
        } else {
            get_floor(static_cast<Floor>(floor));

            std::cout << "Выйти из центра? ";
            std::string exit;
            std::cin >> exit;

            if (exit == "да") {
                break;
            }
        }
    }
}
