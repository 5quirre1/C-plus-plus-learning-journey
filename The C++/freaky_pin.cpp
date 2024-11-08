#include <iostream>

int main() {
  
  int pin = 0;
  int tries = 0;
  
  std::cout << "BANK OF FREAKY\n";
  
  std::cout << "Enter your PIN: ";
  std::cin >> pin;

  tries++;

  while (pin != 1234 && tries < 3) {
    
    std::cout << "That was wrong, Try again now or you're getting kidnapped. \n ";
    std::cin >> pin;
    tries++;
    
  }
  
  if (pin == 6969) {
    
    std::cout << "PIN accepted!\n";
    std::cout << "You now have access.\n"; 
    
  }
  
}
