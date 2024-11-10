#include <iostream>

int main() {

  
  srand (time(NULL));
  
 
  int the_amazing_random_number = rand() % 29;
  std::cout << "Your very random ass number is " << the_amazing_random_number;
  
}
