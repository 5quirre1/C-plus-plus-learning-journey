#include <iostream>
#include <string>
void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}
int main() {
    int num1 = 30;
    int num2 = 20;
    std::cout << "before the number swap\n";
    std::cout << num1 << num2;
    std::cout << "\n";
    swapNums(num1, num2);
    std::cout << "after the number swap\n";
    std::cout << num1 << num2;
}
