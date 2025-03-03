#include <iostream>
#include <iomanip>

int main()
{
    std::string asterix_sing = "*****";
    std::string company = "ТУСУР";
    std::string faculty = "Факультет: Доп. Образование";
    std::string group = "Группа: 315";
    std::string student = "Студент: Сидоров Игорь";
    std::string footer = "Томск 2021";

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

    return 0;
}
