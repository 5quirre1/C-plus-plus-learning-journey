#include <iostream>
#include <string>

int main() {
    std::string greg;
    std::string gerg;
    std::string* ptr = &gerg;
    std::cout << "This is greg\n";
    std::cout << &greg;
    std::cout << "\n";
    std::cout << "This is gerg\n";
    std::cout << ptr;
}
