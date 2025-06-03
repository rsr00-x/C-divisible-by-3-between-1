
#include <iostream>

int main() {
    int number;
    int sum = 0;

    // Ask the user to input a number
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Calculate the sum of numbers divisible by 3
    for (int i = 3; i <= number; i += 3) {
        sum += i;
    }

    // Display the result
    std::cout << "The sum of numbers divisible by 3 between 1 and " << number << " is: " << sum << std::endl;

    return 0;
}

