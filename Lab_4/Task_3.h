#ifndef TASK_3_H
#define TASK_3_H

void task_3() {
    for(char sym = 'a'; sym <= 'z'; sym++) {
        std::cout << sym << " - " << static_cast<int>(sym) << '\n';
    }
}

#endif // TASK_3_H
