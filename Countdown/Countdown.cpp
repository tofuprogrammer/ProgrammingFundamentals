#include <iostream>

int main()
{
    int number = 3;
    std::cout << "Enter a number to count down from: ";
    std::cin >> number;

    while (number <= 0 || std::cin.fail()) // This while loop is executed for as long as the variable number is less than 0 or the attempt to assign the input value to the variable fails, due to the input not being a valid integer.
    {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Invalid number!\n";
        std::cout << "Enter a number to count down from: ";
        std::cin >> number;
    }
    while (number > 0)
    {
        std::cout << "T- " << number <<'\n'; // Shows the number

        number --; // Decrements the number
    }

    std::cout << "Start!"; // Executed when number == 0
}
