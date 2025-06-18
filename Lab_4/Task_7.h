#ifndef TASK_7_H
#define TASK_7_H

void task_7() {
    std::string engine = "UVWN";

    std::cout << "По схеме \"Звезда\"\n";
    std::cout << " --- " << *(&engine[0] + 0) << " - " << *(&engine[0] + 1) << " - " << *(&engine[0] + 2) << "\n\n";

    std::cout << "По схеме \"Треугольник\"\n";
    std::cout << " --- " << *(&engine[0] + 0) << " + " << *(&engine[0] + 1)
              << " | " << *(&engine[0] + 1) << " + " << *(&engine[0] + 2)
              << " | " << *(&engine[0] + 2) << " + " << *(&engine[0] + 0)
              << "\n\n";
}

#endif // TASK_7_H
