#include <iostream>
#include <chrono>
#include <iomanip>
#include <ctime>

int main() {
    
    auto now = std::chrono::system_clock::now();

   
    std::time_t currentTime = std::chrono::system_clock::to_time_t(now);
    std::tm* localTime = std::localtime(&currentTime);

   
    std::cout << "My time greg\n";
    std::cout << std::put_time(localTime, "%I:%M:%S %p") << '\n';

    return 0;
}
