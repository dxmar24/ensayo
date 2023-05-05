#include <iostream>

class Calculator {
public:
    int add(int num1, int num2) {
        return num1 + num2;
    }
};

int main() {
    Calculator calc;
    int num1, num2;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    int result = calc.add(num1, num2);

    std::cout << "Result: " << result << std::endl;

    return 0;
}




