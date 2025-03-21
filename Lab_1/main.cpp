/*
* Lab_1
* Исследование комментариев
*
* Developer: Агамагомедов Вадим Вагифович
* OS: MacOS
* locale: UTF-8
*/


#include <iostream> //директива препроцессору, подключение библиотеки
#include <iomanip> //директива препроцессору, подключение библиотеки
/*
    Номер группы 318, факультет Самый лучший
    Разработчики программы 1. Агамагомедов В.В.


    Номер Лабораторной работы Lab_1
*/

//решения для третьего задания вынес в отдельные функции
/*
  task_3_1()
  task_3_2()
  task_3_3()
*/
//1. Вычислить скорость прямолинейного движения (по расстоянию и времени).
void task_3_1() {
    float Distance = 0;
    int Time = 0;
    // цикл продолжается до тех пор, пока пользователь не введет корректное значение
    while (true) {
        std::cout << "Введите расстояние и скорость: ";
        std::cin >> Distance;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Введены некорректные данные!\n";
        } else {
            std::cin >> Time;

            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(32767, '\n');
                std::cout << "Введены некорректные данные!\n";
            } else {

                std::cout << "Скорость прямолинейного движения: " << Distance / Time << std::endl;
                break;
            }
        }
    }
}

//2. Вычислить ускорение (по начальной скорости, конечной скорости и времени).
void task_3_2() {
    float V_0 = 0;
    float V_1 = 0;
    int Time = 0;

    // цикл продолжается до тех пор, пока пользователь не введет корректное значение
    while (true) {
        std::cout << "Введите начальную скорость, конечную скорость и время: ";
        std::cin >> V_0;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Введены некорректные данные!\n";
        } else {
            std::cin >> V_1;

            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(32767, '\n');
                std::cout << "Введены некорректные данные!\n";
            } else {
                std::cin >> Time;

                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(32767, '\n');
                    std::cout << "Введены некорректные данные!\n";
                } else {

                    std::cout << "Ускорение: " << (V_1 - V_0) / Time << std::endl;
                    break;
                }
            }
        }
    }
}

//3. Вычислить радиус круга (по длине его окружности).
void task_3_3() {
    float C = 0;
    // цикл продолжается до тех пор, пока пользователь не введет корректное значение
    while (true) {
        std::cout << "Введите длину окружности: ";
        std::cin >> C;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Введены некорректные данные!\n";
        } else {
            std::cout << "Радиус окружности: " << (C / (2 * 3.14)) << std::endl;
            break;
        }
    }
}

/*
 * \name main
 * \return int результат завершения программы
 */
int main() { // объявление функции main

  //переменные строкового типа, значения которых будут использоваться для вывода в консоль
  std::string asterix_sing = "*****";
  std::string company = "ТУСУР";
  std::string faculty = "Факультет: Доп. Образование";
  std::string group = "Группа: 315";
  std::string student = "Студент: Сидоров Игорь";
  std::string footer = "Томск 2021";

  //значение для установления ширины вывода
  int header = 30;
  std::cout << asterix_sing << std::setw(header) << company << std::setw(header - asterix_sing.length()) << asterix_sing << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;

  std::cout.width(header + 50);
  std::cout << faculty << std::endl;

  std::cout.width(header + 17);
  std::cout << group << std::endl;

  std::cout.width(header + 41);
  std::cout << student << std::endl;

  std::cout.width(header + 8);
  std::cout << footer << std::endl;

  task_3_1();
  task_3_2();
  task_3_3();

  return 0; //возвращаемое значени
} //конец тела функции main (блока main)

//многострочный комментарий с помощью директив
#if 0
 * debug:    51 Kb
 * releae:   50 Kb
#endif
