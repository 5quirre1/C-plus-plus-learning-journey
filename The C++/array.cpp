#include <iostream>
#include <string>


int main() {
    std::string what;
    std::string greg[4] = {"greg1", "greg2", "greg3", "greg4"};
    double i;
    std::cout << "What number of greg do you want. (1-4)\n";
    std::cin >> what;
    if (what == "1") {
        std::cout << greg[0];
        exit(69);
    }
    else if (what == "2") {
        std::cout << greg[1];
        exit(69);
    }
    else if (what == "3") {
        std::cout << greg[2];
        exit(69);
    }
    else if (what == "4") {
        std::cout << greg[3];
        exit(69);
    }
else {
    std::cout << "Choose your greg vro\n";
    main();
}
}