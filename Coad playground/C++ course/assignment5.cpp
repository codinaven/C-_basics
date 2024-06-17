#include <iostream>
#include <algorithm>

int main()
{
    // Get user input
    std::cout << "Enter a string: ";
    std::string input_string;
    std::cin >> input_string;

    // Sort the string in alphabetical order
    std::sort(input_string.begin(), input_string.end());

    // Print the result
    std::cout << "Alphabetical Order: " << input_string << std::endl;

    return 0;
}
