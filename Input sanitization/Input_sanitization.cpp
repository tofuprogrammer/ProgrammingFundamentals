#include <iostream>

int main()
{
    int age = 0; // Declares a variable of type integer called "age" and initalizes it to 0

    std::cout << "Enter your age (18 to 120): "; // Asks the user for their age
    std::cin >> age; // Passes the input to the 'age' variable

    while ( age < 18 || age > 120 || std::cin.fail()) // Runs if the user enters an age younger than 18 or older than 120
    // NOTE: This while loop runs infinitely if the user enters a float that triggers the loop.
    {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        
        std::cout << "Invalid age. Your age must be between 18 and 120.\n"; // Outputs an error message
        std::cout << "Enter your age (18 to 120): "; // And ask the user again
        std::cin >> age; // Passes the input to the 'age' variable
    }
}