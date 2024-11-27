#include <iostream>
#include <string>


int main() {
    std::string am_i_cooking;
    std::cout << "True = 1, False = 0\n";
    std::cout << "22 = 22\n" << (22 == 22);
    std::cout << "\n";
    std::cout << "22 = 15\n" << (22 == 15);
    std::cout << "\n";
    std::cout << "14 > 55\n" << (14 > 55);
    std::cout << "\n";
    std::cout << "55 > 15\n" << (55 > 15);
    std::cout << "\n";
    std::cout << "Am I cooking with my learning\n";
    std::cin >> am_i_cooking;
    if (am_i_cooking == "yes" || am_i_cooking == "Yes" || am_i_cooking == "YES") {
        std::cout << "Slayyyy";
    }
    if (am_i_cooking == "no" || am_i_cooking == "No" || am_i_cooking == "NO") {
        std::cout << "meanie....";
    }
else {
    std::cout << "taking that as a yes frfr";
}
}
