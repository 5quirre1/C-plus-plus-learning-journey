#include <iostream>
#include <string>

void more() {
int myAge;
int old_asf = 18;
std::cout << "Put your age and see if old asf\n";
std::cin >> myAge;
if (myAge  >=  old_asf) {
    std::cout << "You're so fucking old\n";
}
else {
    std::cout << "not old alert\n";
}
std::cout << "***********************************************\n";
std::cout << "Thank you for using cause funsies and I'm learning yayaya";

}
int main() {
    std::string am_i_cooking;
    std::string more_plz;
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
        std::cout << "Slayyyy\n";
    }
    else if (am_i_cooking == "no" || am_i_cooking == "No" || am_i_cooking == "NO") {
        std::cout << "meanie....\n";
    }
    std::cout << "Wanna see more greg??\n";
    std::cin >> more_plz;
    if (more_plz == "yes" || more_plz == "Yes" || more_plz == "YES") {
       more();
    }
    if (more_plz == "no" || more_plz == "No" || more_plz == "NO") {
        std::cout << "No one likes you.";
        exit(888888888);
    }
    else {
        std::cout << "greg";
        exit(888888888);
    }
}