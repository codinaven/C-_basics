#include <iostream>

// Function to display the pattern
void display(int num) {
    for (int i = num; i >= 1; --i) {
        for (int j = i; j >= 1; --j) {
            std::cout << j;
        }
        std::cout <<std::endl;
    }
    std::cout << std::endl;
}

int main() {
    int inputNumber = 5;  // You can change this to any positive integer

    // Invoke the function to display the pattern
    display(inputNumber);

    return 0;
}
