#include <iostream>
#include <cstring>

int main() {
    const char* str1 = "apple";
    const char* str2 = "banana";

    // Compare the two strings lexicographically
    int result = strcmp(str1, str2);

    // Display the result
    if (result == 0) {
        std::cout << "The strings are equal." << std::endl;
    } else if (result < 0) {
        std::cout << "str1 is less than str2." << std::endl;
    } else {
        std::cout << "str1 is greater than str2." << std::endl;
    }

    return 0;
}

