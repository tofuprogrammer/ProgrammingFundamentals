#include <iostream> // Allows usage of input and output functions such as std::cout.

int main() // Starting point for the program.
{
    bool passed; // Initializes a boolean with identifier "passed"
    float grade; // Initializes a float with identifier "grade";
    std::cout << "What mark did you receive?: "; // Asks the user what mark they received
    std::cin >> grade; // Passes the input to the float "grade"
    if (grade >= 40) // Checks if "grade" is greater than or equal to 40
    {
        passed = true; // Sets the boolean "passed" to true
    }
    else // Executed if grade < 40
    {
        passed = false; // Sets the boolean "passed" to false
    }
    if (passed == true) // Checks the value of "passed" to see if the student passed or not
    {
        std::cout << "passed: true"; // Outputs "passed: true" if the student's mark was >= 40
    }
    else // Executed if passed == false
    {
        std::cout << "passed: false"; // Outputs "passed: false" if the student's mark was < 40
    }
}