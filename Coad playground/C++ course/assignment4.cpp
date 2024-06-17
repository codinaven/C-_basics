#include <iostream>

class FactorialCalculator {
public:
    int calculateFactorial(int n) {
        if (n == 0 || n == 1) {
            return 1;
        } else {
            return n * calculateFactorial(n - 1);
        }
    }
};

int main() {
    FactorialCalculator calculator;
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        int result = calculator.calculateFactorial(num);
        std::cout << "The factorial of " << num << " is " << result << std::endl;
    }

    return 0;
}
