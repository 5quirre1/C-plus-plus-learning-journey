#include <iostream>
#include <string>

int main() {
    struct {
    std::string name;
    double age;
    }greg;
    greg.name = "greg";
    greg.age = 69;
    std::cout << greg.name << "\n";
    std::cout << greg.age;
}

