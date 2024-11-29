#include <iostream>
#include <string>
#include <math.h>
double num1;
double num2;
std::string operation;

void multiply();
void division();
void addition();
void subtraction();
void calculator();

void calculator() {
    std::cout << "What do you want to do? (*, /, +, -):\n";
    std::cin >> operation;
    std::cout << "Put the first number:\n";
    std::cin >> num1;

    if (operation == "*") {
        multiply();
    } else if (operation == "/") {
        division();
    } else if (operation == "+") {
        addition();
    } else if (operation == "-") {
        subtraction();
    } else {
        std::cout << "Invalid operation\n";
    }
}
void multiply() {
    std::cout << "Put the second number:\n";
    std::cin >> num2;
    double answerM = num1 * num2;
    std::cout << "Answer: " << answerM << "\n";
     exit(69);
}
void division() {
    std::cout << "Put the second number:\n";
    std::cin >> num2;
    double answerD = num1 / num2;
    std::cout << "Answer: " << answerD << "\n";
    exit(69);
}
void addition() {
    std::cout << "Put the second number:\n";
    std::cin >> num2;
    double answerA = num1 + num2;
    std::cout << "Answer: " << answerA << "\n";
    exit(69);
}
void subtraction() {
    std::cout << "Put the second number:\n";
    std::cin >> num2;
    double answerS = num1 - num2;
    std::cout << "Answer: " << answerS << "\n";
    exit(69);
}


int main() {
    calculator();
}
