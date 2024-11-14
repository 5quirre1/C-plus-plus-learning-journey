#include <iostream>
#include <string>
std::string account_name;
std::string password;
std::string email;
void greeting() {
    std::string option;
    std::cout << "                                  Bank of Freaky\n";
std::cout << "Welcome to FreakyBank! You'll need to make an account to use this! Type 'Signup' to start the signup process\n";
std::cin >> option;
if (option == "Signup" || option == "signup") {
    std::cout << "-------------------------------------------------------\n";
    std::cout << "Username: " << account_name;
    std::cout << "-------------------------------------------------------\n";
    std::cout << "Email\n";
    std::cin >> email;
    std::cout << "-------------------------------------------------------\n";
}
}
int main() {
  greeting();
}
