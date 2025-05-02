#ifndef TASK_4_H
#define TASK_4_H

#endif // TASK_4_H

/*
Задание 4.
Определите перечисление (или класс enum) Animal, которое содержит следующих животных:
pig, chicken, goat, cat, dog. Напишите функцию getAnimalName(), которая принимает
параметр Animal и использует switch для вывода имя животного в консоль. Напишите еще
одну функцию — printNumberOfLegs(), которая использует switch для вывода количества лап
соответствующего типа животного. Убедитесь, что обе функции имеют кейс default, который
выводит сообщение об ошибке.
*/

enum class Animal {
    pig,
    chicken,
    goat,
    cat,
    dog
};

//генерация кода
#define CREATE_CONDITIONS(name, property, number_of_legs) {     if (property == "name") {\
                                                                    printf("%s\n", name);\
                                                                } else if (property == "legs") {\
                                                                    printf("%d\n", number_of_legs);\
                                                                }\
                                                            }

// определение наименования и кол-ва ног по названию животного
void getValueProperty(Animal animal, const std::string property) {
    switch (animal) {
    case Animal::pig:
        CREATE_CONDITIONS("Свинья", property, 4)
        break;
    case Animal::chicken:
        CREATE_CONDITIONS("Курица", property, 2)
        break;
    case Animal::goat:
        CREATE_CONDITIONS("Козёл", property, 4)
        break;
    case Animal::cat:
        CREATE_CONDITIONS("Кот", property, 4)
        break;
    case Animal::dog:
        CREATE_CONDITIONS("Собака", property, 4)
        break;
    default:
        printf("Нет такого животного\n");
        break;
    }
}

void getAnimalName(Animal animal) {
    getValueProperty(animal, "name");
}

void printNumberOfLegs(Animal animal) {
    getValueProperty(animal, "legs");
}


void task_4(){
    getValueProperty(Animal::pig, "name");
    getValueProperty(Animal::pig, "legs");

    getValueProperty(Animal::chicken, "name");
    getValueProperty(Animal::chicken, "legs");
}
