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
        std::cout << "passed: true\n"; // Outputs "passed: true" if the student's mark was >= 40
    }
    else // Executed if passed == false
    {
        std::cout << "passed: false\n"; // Outputs "passed: false" if the student's mark was < 40
    }
    if (grade >= 70) // Executes if grade >= 70)
    {
        std::cout << "You got a first class grade!"; // Outputs "You got a first class grade!"
    }
    else if (grade >= 60) // Executes if 60 <= grade < 70 
    {
        std::cout << "You got an upper second class grade!"; // Outputs "You got an upper second class grade!"
    }
    else if (grade >= 50) // Executes if 50 <= grade < 60 
    {
        std::cout << "You got a lower second class grade!"; // Outputs "You got a lower second class grade!"
    }
    else if (grade >= 40) // Executes if 40 <= grade < 50 
    {
        std::cout << "You got a third class grade!"; // Outputs "You got a third class grade!"
    }
    else  // Executes if grade < 40
    {
        std::cout << "You failed!"; // Outputs "You failed!"
    }
}