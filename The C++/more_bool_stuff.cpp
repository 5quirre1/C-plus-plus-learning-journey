#include <iostream>
#include <string>

void ifs() {
    double x;
    double y;
    std::string do_it;
    std::cout << "Put the first number\n";
    std::cin >> x;
    std::cout << "Put the second number\n";
    std::cin >> y;
    if (x > y) {
        std::cout << x << " is bigger than " << y << "\n";
    }
    else if (y > x) {
        std::cout << y << " is bigger than " << x << "\n";
    }
    else if (x == y) {
        std::cout << x << " and " << y << " are equal\n";
    }
    std::cout << "wanna go again?\n";
    std::cin >> do_it;
    if (do_it == "Yes" || do_it == "yes" || do_it == "YES") {
        ifs();
    }
    else if (do_it == "No" || do_it == "no" || do_it == "NO") {
        std::cout << "Goodbye\n";
        exit(69);
    }
    else {
        std::cout << "idk so bai bai greg";
        exit(69);
    }

}
int main() {
    ifs();
}