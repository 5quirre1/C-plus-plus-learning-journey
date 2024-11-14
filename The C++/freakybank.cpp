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
    std::cout << "Username:\n";
    std::cin >> account_name;
    std::cout << "-------------------------------------------------------\n";
    std::cout << "Email:\n";
    std::cin >> email;
    std::cout << "-------------------------------------------------------\n";
    std::cout << "Password:\n";
    std::cin >> password;
    std::cout << "-------------------------------------------------------\n";
}
std::cout << "Does this look alright? (y/n)\n";
std::cin >> option;
if (option == "y" || option == "Y" || option == "yes" || option == "Yes") {
    std::cout << "Loading the dashboard..."; 
}
}
int main() {
  greeting();
}
  
