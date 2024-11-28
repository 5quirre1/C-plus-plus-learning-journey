#include <iostream>
#include <string>

void test(std::string name) {
    std::cout << name << " Gay\n";
}
int main() {
    std::string name;
    test("greg");
    test("Squirrel");
    std::cout << "Wanna have your own gay last name? Just say your first name\n";
    std::cin >> name;
    std::cout << name << " Gay";

    return 0;
}
