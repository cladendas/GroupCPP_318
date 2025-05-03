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
