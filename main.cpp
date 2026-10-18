#include <locale>
#include <iostream>

int main(){
    std::setlocale(LC_ALL, "");
    std::cout << "Hello";
    return 0;
}