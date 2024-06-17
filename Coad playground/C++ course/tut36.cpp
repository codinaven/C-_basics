#include <iostream>
#include <cstring> // for string manipulation functions

int main() {
    char input_string[50]; // Allocate space for the string

    std::cout << "Enter a string: ";
    std::cin.getline(input_string, sizeof(input_string)); // Read string from user

    // Now, let's dynamically allocate memory for another character array
    // to store the string, without any extra space
    char *dynamic_string = new char[strlen(input_string) + 1]; // +1 for null terminator

    // Copy the input string into the dynamically allocated array
    strcpy(dynamic_string, input_string);

    // Print the input string and the dynamically allocated string
    std::cout << "Input String: " << input_string << std::endl;
    std::cout << "Dynamically Allocated String: " << dynamic_string << std::endl;

    // Free dynamically allocated memory
    delete[] dynamic_string;

    return 0;
}
