/*
* Lab_1
* Исследование типов данных, лексем в IDE (интегрированной среде разработки) Qt Creator
*
* Developer: Агамагомедов Вадим Вагифович
* OS: MacOS
* locale: UTF-8
*/

#include <iostream>
#include <bitset> // для работы с двоичным представлением значения
#include <limits> // для работы со значениями свойств арифметических типов

//Формула Брока
double brock(const int height, const bool sex) {
    const double coef = sex ? 0.9 : 0.85;
    return (height - 100) * coef;
}

//рассчёт индекса по росту и массе
double get_index_weight(const int height, const double weight) {
    const double m_height{static_cast<double>(height) / 100}; // перевод в метры
    const double index{weight / (m_height * m_height)};

    return index;
}

//по индексу массы тела
std::string index_weight(const int height, const double weight) {
    const double index{get_index_weight(height, weight)}; //получение индекса

    std::cout << "Индекс: " << index << std::endl;

    if (index <= 16) {
        return "Выраженный дефицит массы";
    } else if (index > 16 && index <= 18.5) {
        return "Недостаточная (дефицит) масса тела";
    } else if (index > 18.5 && index <= 25) {
        return "Норма";
    } else if (index > 25 && index <= 30) {
        return "Избыточная масса тела (предожирение)";
    } else if (index > 30 && index <= 35) {
        return "Ожирение первой степени";
    } else if (index > 35 && index <= 40) {
        return "Ожирение второй степени";
    } else if (index > 40) {
        return "Ожирение третьей степени (морбидное)";
    } else {
        return "Неклассифицируемые данные";
    }
}

//рассчёт с учётом нормы
std::string calc_index_norm(const double index, const double norm) {
    if (index >= norm && index < (norm + 5)) {
        return "В норме";
    } else if (index >= (norm + 5)){
        return "Имеются проблемы с лишним весом";
    } else if (index < norm) {
        return "Дефицит массы тела";
    } else {
        return "Неклассифицируемые данные";
    }
}

//по индексу массы тела с учетом возраста
std::string index_weight_age(const int height, const double weight, const bool sex, const int age) {
    const double index{get_index_weight(height, weight)}; //получение индекса

    if (age >= 19 && age <= 24) {
        const double norm = sex ? 21.4 : 19.5; //расчёт нормы для данного возраста с учётом пола
        return calc_index_norm(index, norm);
    } else if (age >= 25 && age <= 34) {
        const double norm = sex ? 21.6 : 23.2; //расчёт нормы для данного возраста с учётом пола
        return calc_index_norm(index, norm);
    } else if (age >= 35 && age <= 44) {
        const double norm = sex ? 22.9 : 23.4; //расчёт нормы для данного возраста с учётом пола
        return calc_index_norm(index, norm);
    } else if (age >= 45 && age <= 54) {
        const double norm = sex ? 25.8 : 25.2; //расчёт нормы для данного возраста с учётом пола
        return calc_index_norm(index, norm);
    } else if (age > 55) {
        const double norm = sex ? 26.6 : 27.3; //расчёт нормы для данного возраста с учётом пола
        return calc_index_norm(index, norm);
    } else {
        return "Неклассифицируемые данные";
    }
}

void task_1() {
    //Без проверок данных введёных пользователем
    std::cout << "Задание 1" << std::endl;
    std::cout << "Калькулятор для расчета идеального веса" << std::endl;
    std::cout << "Калькулятор для расчета идеального веса" << std::endl;

    std::cout << "Введите возраст: ";
    int tmp_age;
    std::cin >> tmp_age;
    const int age{tmp_age};

    std::cout << "Введите вес в кг: ";
    double tmp_weight;
    std::cin >> tmp_weight;
    const double weight{tmp_weight};

    std::cout << "Введите рост в см: ";
    int tmp_height;
    std::cin >> tmp_height;
    const int height{tmp_height};

    std::cout << "Если мужчина введите 1, женщина 0: ";
    bool tmp_sex;
    std::cin >> tmp_sex;
    const int sex{tmp_sex};

    std::cout << "Подсчет идеального веса" << std::endl;
    std::cout << "a - по формуле Брока" << std::endl;
    std::cout << "b - по индексу массы тела" << std::endl;
    std::cout << "с - по индексу массы тела с учетом возраста" << std::endl;
    char tmp_calculation;
    std::cin >> tmp_calculation;
    const char calculation{tmp_calculation};

    if (calculation == 'a') {
        std::cout << "Оптимальный вес должен быть в районе: " << brock(height, sex);
    } else if (calculation == 'b') {
        std::cout << index_weight(height, weight) << std::endl;
    } else if (calculation == 'c') {
        std::cout << index_weight_age(height, weight, sex, age) << std::endl;
    }
}

//отображение типа и занимаемого им места в байтах
void show_sizeof(const std::string type, const int size) {
    std::cout << type << ": " << size << " bytes" << std::endl;
}


//генерация блоков кода по типу x
#define TYPE_SIZE(type) {  const type value{0}; \
                    show_sizeof(#type, sizeof(value)); }


#define TYPE_MIN_MAX(type) { \
    std::cout << "Binary -------" << std::endl; \
    std::cout << "- min: " << std::bitset<8>{std::numeric_limits<type>::min()} << std::endl; \
    std::cout << "- max: " << std::bitset<8>{std::numeric_limits<type>::max()} << std::endl; \
    std::cout << "Octal -------" << std::endl; \
    std::cout << "- min: " << std::oct << std::numeric_limits<type>::min() << std::endl; \
    std::cout << "- max: " << std::oct << std::numeric_limits<type>::max() << std::endl; \
    std::cout << "Decimal -------" << std::endl; \
    std::cout << "- min: " << std::dec << std::numeric_limits<type>::min() << std::endl; \
    std::cout << "- max: " << std::dec << std::numeric_limits<type>::max() << std::endl; \
    std::cout << "hexadecimal -------" << std::endl; \
    std::cout << "- min: " << std::hex << std::numeric_limits<type>::min() << std::endl; \
    std::cout << "- max: " << std::hex << std::numeric_limits<type>::max() << std::endl; \
}

void task_2() {

    TYPE_SIZE(int)
    TYPE_SIZE(float)
    TYPE_SIZE(double)
    TYPE_SIZE(char)
    TYPE_SIZE(bool)

    std::cout << std::endl;

    TYPE_SIZE(unsigned int)
    TYPE_SIZE(signed int)
    TYPE_SIZE(short int)
    TYPE_SIZE(long int)
    TYPE_SIZE(long double)
    TYPE_SIZE(unsigned char)
    TYPE_SIZE(unsigned short)
    TYPE_SIZE(unsigned long long)

    std::cout << std::endl;

    TYPE_MIN_MAX(unsigned short)

    std::cout << std::endl;

    TYPE_MIN_MAX(unsigned int)

    std::cout << std::endl;

    // TYPE_MIN_MAX(char)

    // std::cout << std::endl;

    TYPE_MIN_MAX(u_int32_t)

    // std::cout << std::endl;

    // TYPE_MIN_MAX(double)

}



int main() {

#if 0
    //Калькулятор для расчета идеального веса
    task_1();
#endif

#if 1
    //Организуйте вывод размеров основных типов данных C++
    task_2();
#endif

    return 0;
}
