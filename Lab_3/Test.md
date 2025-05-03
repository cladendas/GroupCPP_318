# a) 🟥
```cpp
int return 5(){
return 5
}
int return8(){
return;
}
int main( {
std::cout << return5() + return8() << ;
return 0
}
```

# a) 🟩
```cpp
#include <iostream>

int return5() {
  return 5;
}

int return8() {
  return 8;
}

int main() {
  std::cout << return5() + return8() << '\n';
  return 0;
}
```

# b) 🟥
```cpp
int return() {
  return 5;
  int return()
  {
    int k ;
    k{3};
    return k;
  }
}
int main(){
  std::cout << return() <<
  std::cout << return() <<
}
```

# b) 🟩
```cpp
#include <iostream>

int return_3() {
    int k{3};
    return k;
}

int return_5() {
    return 5;
}

int main() {
    std::cout << return_3() << '\n';
    std::cout << return_5() << '\n';
}
```

# c) 🟥
```cpp
void prints
()
{
    std::cout << 'O_o' << ;
}
int main ()
        {
    std::cout << prints() <<
    return 0;
}
```

# c) 🟩
```cpp
#include <iostream>

void prints() {
    std::cout << "O_o" << '\n';
}

int main (){
    prints();
    return 0;
}
```

# d) 🟥
```cpp
int getNumbers()
{
    return 6;
    return;
}
int main()
{
    std::cout << getNumbers(
    std::cout << getNumbers)
    std::cout << getNumbers
    return 0;
}
```

# d) 🟩
```cpp
#include <iostream>

int getNumbers() {
    return 6;
}

int main() {
    std::cout << getNumbers() << '\n';
    std::cout << getNumbers() << '\n';
    std::cout << getNumbers() << '\n';
    return 0;
}
```

# e) 🟥
```cpp
int main()
{
    std::cout << multiply(7, 8)

    return 0;
}
void multiply(int a)
{
    return a * b
}
int main() {
    int x;
    std::cin >> x;
    constexpr y(x);
    std::cout << y << std::endl;
        return 0;
}
```

# e) 🟩
```cpp
#include <iostream>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    std::cout << multiply(7, 8) << '\n';
    
    int x;
    std::cin >> x;
    const int y(x);
    std::cout << y << std::endl;
    return 0;
}
```

# f) 🟥
```cpp
#define VALUE
int main() {
#if (VALUE == 0)
    std::cout << VALUE <<"\n";
#elif (VALUE == 1)
    std::cout << VALUE <<"\n";
#
elif
    std::cout << VALUE <<"\n";
}
```

# f) 🟩
```cpp
#include <iostream>

#define VALUE 99

int main() {
    
#if VALUE == 0
    std::cout << VALUE <<"\n";
#elif VALUE == 1
    std::cout << VALUE <<"\n";
#else
    std::cout << "NULL" <<"\n";
#endif
}
```

# g) 🟥
```cpp
namespace Mix {
enum class Fruits {
    LEMON,
    APPLE
}
enum class Colors {
    RED,
    BLACK
}
};
int main() {
    Fruits fruit = Fruits::LEMON;
    std::cout << "MIX\n";
    return 1;
}
```

# g) 🟩
```cpp
#include <iostream>

namespace Mix {
    enum class Fruits {
        LEMON,
        APPLE
    };
    
    enum class Colors {
        RED,
        BLACK
    };
}

int main() {
    Mix::Fruits fruit = Mix::Fruits::LEMON;
    std::cout << "MIX\n";
    return 1;
}
```

# h) 🟥
```cpp
namespace DoMath
{
    int subtract(int x, int y)
    {
    return x , y;
    }
namespace DoMath
{
    int add(int x, int y)
    {
    return x | y;
    }
}
}
auto main()
{
    std::cout << DoMath::add(5, 4) << '\n';

    std::cout << ::subtract(5, 4) << '\n';
    return 0;
}
```

# h) 🟩
```cpp
#include <iostream>

namespace DoMath {
    int subtract(int x, int y) {
        return x - y;
    }
    
    int add(int x, int y) {
        return x + y;
    }
}

int main() {
    std::cout << DoMath::add(5, 4) << '\n';
    std::cout << DoMath::subtract(5, 4) << '\n';
    return 0;
}
```

## 🟩 3.2 Чтобы программа cкомпилировалась нужно что-то добавить, нельзя удалять или
комментировать программный код:
```cpp
#include <iostream>

int tmp = 1;

int getNumbers();

int main() {
    int tmp = 3;
    std::cout << "Глобальная переменная tmp: " << tmp << '\n';
    std::cout << "Локальная переменная tmp: " << getNumbers() << '\n';
    std::cout << "zzz \":)\" Чтобы программа скомпилилась нужно что-то добавить а нельзя удалять \n\
                    здесь пустые строки или \n\
                комментировать"
            << std::endl;
    return 0;
}

int getNumbers() {
    int tmp = 3;
    return tmp;
}
```
