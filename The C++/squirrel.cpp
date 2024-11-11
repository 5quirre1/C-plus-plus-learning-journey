#include <iostream>
#include <chrono>
#include <iomanip>
#include <ctime>

int main() {
    std::string name;
    std::string user;
    double age = 13;
    std::string fav_code_language;
    name = "Squirrel";
    std::string learning;
    std::string fav_user_lang;
    double old_asf = 18;
   int userage;
    learning = "C++";
fav_code_language = "HTML";

auto now = std::chrono::system_clock::now();

   
    std::time_t currentTime = std::chrono::system_clock::to_time_t(now);
    std::tm* localTime = std::localtime(&currentTime);
    
    

    std::cout << "Hello there! What's ya name vruh?\n";
    std::cin >> user;
    std::cout << "Nice to meet ya, " << user << "!!\n";

    std::cout << "My name is " << name << "!\n";
    std::cout << "I'm " << age << " years old! Say, how old are You?\n";
    std::cin >> userage;
    if (userage == age) {
        std::cout << "No way, me too!!!!!!!\n";
    }
    if (userage > old_asf || userage == old_asf) {
        std::cout << "You're kinda old LMAO\n";
        
    }
    else if (userage < old_asf) {
        std::cout << "Anyway,\n";
        std::cout << "-------------------------------------------------------\n";
    }

    std::cout << "My favorite coding language is " << fav_code_language << "!!\n";
    std::cout << "What's your favorite coding language?\n";
    std::cin >> fav_user_lang;
    if (fav_user_lang == fav_code_language) {
        std::cout << "WOW, YOU'RE JUST LIKE ME LMAO\n";
    }
    if (fav_user_lang == "java" || fav_user_lang == "Java") {
        std::cout << "why...\n";
    }
    else {
std::cout << "Fire!!\n";
    }
    std::cout << "-------------------------------------------------------\n";
    std::cout << "I'm currently learning " << learning << "!!\n";
    std::cout << "-------------------------------------------------------\n";
    std::cout << "I know HTML, CSS, JAVA, JAVASCRIPT and just a little bit of Python!!!\n";
    std::cout << "-------------------------------------------------------\n";
     // thank you to the random nerd websites I found on google to help with the time thing LMAO
    std::cout << "MY TIME IF FOR SOME REASON YOU WANT IT LMAO\n";
    std::cout << "My Current time :3\n";
    std::cout << std::put_time(localTime, "%I:%M:%S %p") << "\n";
    std::cout << "-------------------------------------------------------\n";
    std::cout << "Welp, Idk what else to put here so uhhhhh bai bai " << user << ", I'll cya around some other time lmao";
}
