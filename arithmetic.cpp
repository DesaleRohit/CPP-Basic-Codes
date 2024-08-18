#include<iostream>

int main(){
    int a ,b;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    // Addition
    int sum = a + b;
    std::cout << "Addition: " << sum << std::endl;

    // Subtraction
    int difference = a - b;
    std::cout << "Subtraction: " << difference << std::endl;

    // Multiplication
    int product = a * b;
    std::cout << "Multiplication: " << product << std::endl;

    // Division
    double quotient = static_cast<double>(a) / b;
    std::cout << "Division: " << quotient << std::endl;

    // Remainder
    int remainder = a % b;
    std::cout << "Remainder: " << remainder << std::endl;

    return 0;
}