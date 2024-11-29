#include <iostream>
#include <string>
#include <chrono>
#include <thread>
std::string account_name;
std::string password;
std::string email;
std::string money;
std::string option;
using namespace std;
void bank();
void greeting();

void greeting() {
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
    std::cout << "Loading the dashboard...\n"; 
    std::this_thread::sleep_for(std::chrono::seconds(2));
    bank();
}

if (option == "n" || option == "N" || option == "no" || option == "No") {
    greeting();
}
}
void bank() {
    std::cout << "Welcome " << account_name << "!\nYou currently have " << money << ".\n";
    std::cout << "It seems you have a new account, do you want to go to settings so you can put your money in here?\n";
    std::cin >> option;
    std::cout << "-------------------------------------------------------\n";
    if (option == "settings" || option == "Settings") {
        std::cout << "Transfer your account";
    }
}
int main() {
  greeting();
}
  
