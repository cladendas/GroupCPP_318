/*
* Lab_2
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

    std::cout << "Индекс: " << index << '\n';

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
    std::cout << "Задание 1" << '\n';
    std::cout << "Калькулятор для расчета идеального веса" << '\n';
    std::cout << "Калькулятор для расчета идеального веса" << '\n';

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

    std::cout << "Подсчет идеального веса" << '\n';
    std::cout << "a - по формуле Брока" << '\n';
    std::cout << "b - по индексу массы тела" << '\n';
    std::cout << "с - по индексу массы тела с учетом возраста" << '\n';
    char tmp_calculation;
    std::cin >> tmp_calculation;
    const char calculation{tmp_calculation};

    if (calculation == 'a') {
        std::cout << "Оптимальный вес должен быть в районе: " << brock(height, sex);
    } else if (calculation == 'b') {
        std::cout << index_weight(height, weight) << '\n';
    } else if (calculation == 'c') {
        std::cout << index_weight_age(height, weight, sex, age) << '\n';
    }
}

//отображение типа и занимаемого им места в байтах
void show_sizeof(const std::string type, const int size) {
    std::cout << type << ": " << size << " bytes" << '\n';
}

//кол-во бит в байте
#define BITE_BYTES 8

//для определения кол-ва разрядов
#define COUNT_BITS sizeof(value) * BITE_BYTES

//генерация блоков кода по типу type
#define TYPE_SIZE(type) {  const type value{0}; \
                    show_sizeof(#type, sizeof(value)); }

//генерация блоков кода для вывода мин и макс значений тип type
#define TYPE_MIN_MAX(type) { \
    const type value = 0; \
    std::cout << "Binary" << '\n'; \
    std::cout << "- min: " << std::bitset<COUNT_BITS>{std::numeric_limits<type>::min()} << '\n'; \
    std::cout << "- max: " << std::bitset<COUNT_BITS>{std::numeric_limits<type>::max()} << '\n'; \
    std::cout << "Octal" << '\n'; \
    std::cout << "- min: " << std::oct << std::numeric_limits<type>::min() << '\n'; \
    std::cout << "- max: " << std::oct << std::numeric_limits<type>::max() << '\n'; \
    std::cout << "Decimal" << '\n'; \
    std::cout << "- min: " << std::dec << std::numeric_limits<type>::min() << '\n'; \
    std::cout << "- max: " << std::dec << std::numeric_limits<type>::max() << '\n'; \
    std::cout << "hexadecimal" << '\n'; \
    std::cout << "- min: " << std::hex << std::numeric_limits<type>::min() << '\n'; \
    std::cout << "- max: " << std::hex << std::numeric_limits<type>::max() << '\n'; \
}

void task_2() {

    TYPE_SIZE(int)
    TYPE_SIZE(float)
    TYPE_SIZE(double)
    TYPE_SIZE(char)
    TYPE_SIZE(bool)

    std::cout << '\n';

    TYPE_SIZE(unsigned int)
    TYPE_SIZE(signed int)
    TYPE_SIZE(short int)
    TYPE_SIZE(long int)
    TYPE_SIZE(long double)
    TYPE_SIZE(unsigned char)
    TYPE_SIZE(unsigned short)
    TYPE_SIZE(unsigned long long)

    std::cout << '\n';

    std::cout << "unsigned short --------" << '\n';
    TYPE_MIN_MAX(unsigned short)

    std::cout << '\n';

    std::cout << "unsigned int --------" << '\n';
    TYPE_MIN_MAX(unsigned int)

    std::cout << '\n';

    std::cout << "bool --------" << '\n';
    TYPE_MIN_MAX(bool)

    std::cout << '\n';

    std::cout << "u_int32_t --------" << '\n';
    TYPE_MIN_MAX(u_int32_t)

    std::cout << '\n';

    std::cout << "unsigned long --------" << '\n';
    TYPE_MIN_MAX(unsigned long)

}

//рекурсивно получаем сумму введёных чисел
//quantity - кол-во запросов
double get_amount(const int quantity) {
    double amount = 0;

    if (quantity == 0) {
        return amount;
    } else {
        std::cout << "Введите число с точкой: ";
        double tmp;
        std::cin >> tmp;
        amount += tmp;
        return amount + get_amount(quantity - 1);
    }
}

void task_3() {
    const size_t quantity = 10; //кол-во запросов
    std::cout << "Сейчас у вас запросят 10 раз ввод числа с точкой" << '\n';
    double amount = get_amount(quantity);

    std::cout << "Среднее арифметическое: " << (amount / quantity) << '\n';
}

void task_4() {
    std::cout << "34.50 = " << 3.450e1 << '\n';
    std::cout << "0.004000 = " << 4e-3 << '\n';
    std::cout << "123.005 = " << 1.23005e2 << '\n';
    std::cout << "146000 = " << 1.46e5 << '\n';
}

//генерация кода для проверки истинности выражений
#define CHECK_EXPRESSION(expr) std::cout << #expr" = " << std::boolalpha << expr << '\n';

enum class Nums {
    ONE  = 1,
    TWO,
    THREE,
    FOURE,
    FIVE,
    SIX
};

void task_5() {
    {
        CHECK_EXPRESSION( ((true && true) || false) )
        CHECK_EXPRESSION( ((false && true) || true) )
        CHECK_EXPRESSION( ((false && true) || false || true) )
        CHECK_EXPRESSION( ((5 > 6 || 4 > 3) && (7 > 8)) )
        CHECK_EXPRESSION( (!(7 > 6 || 3 > 4)) )
    }

    {
        const bool a = true;
        const bool b = true;
        const bool c = false;
        const bool d = false;
        const bool e = true;
        const bool f = true;

        std::cout << std::boolalpha;
        std::cout << ( ((a && b) || ( !c) && (d || f)) ) << '\n';
        std::cout << ( ((a && b) || (c && d) || (!e)) ) << '\n';
        std::cout << ( ((a || b) && (c || d) && (e || f)) ) << '\n';

        std::cout << ( ((Nums::ONE > Nums::TWO) && (Nums::THREE < Nums::FOURE) && (Nums::FIVE != Nums::SIX)) ) << '\n';

        std::cout << "Закон де Моргана !(a && B) == !a || !b" << " --- " << ( !(a && b) == !a || !b ) << '\n';
        std::cout << "Закон де Моргана !(a || B) == !a && !b" << " --- " << ( !(a || b) == !a && !b ) << '\n';
    }

    {
        std::cout << "Введите через пробел четыре целых числа: ";
        int x;
        int y;
        int z;
        int v;

        std::cin >> x >> y >> z;

        std::cout << "1) " << "x = 3 + 4 + 5 = " << x + 3 + 4 + 5 << '\n';
        std::cout << "2) " << "x = y = x = " << (x == y == z) << '\n';
        z *= ++y + 5;
        std::cout << "3) " << "z *= ++y + 5 = " << z << '\n';

        bool logicValue;
        logicValue = x || y && z || v;
        std::cout << "logicValue = x || y && z || v = " << logicValue << '\n';
    }

    {
        std::cout << "Введите число в диапазоне от 0 до 2^n, где n=4: ";
        unsigned int num;
        std::cin >> num;
        std::cout << "Введите число, на которое необходимо сдвинуть число влево: ";
        unsigned int shift;
        std::cin >> shift;

        num <<= shift;

        std::cout << num << '\n';
        std::cout << std::bitset<8>(num) << '\n';
        std::cout << std::hex << num << '\n';
        std::cout << std::oct << num << '\n';

    }

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

#if 0
    //Задание должно предложить пользователю ввести 10 чисел с плавающей точкой
    task_3();
#endif

#if 0
    //Задание должно переводить следующие числа из существующей записи в экспоненциальную запись в стиле языка C++
    task_4();
#endif

#if 0
    task_5();
#endif

    return 0;
}
