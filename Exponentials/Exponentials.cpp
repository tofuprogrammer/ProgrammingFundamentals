#include <iostream> // Allows usage of input and output functions such as std::cout.

int main() // Starting point for the program.
{
    const int number = 73; // Defines "number" as a constant variable of type int (integer) initialised to a value of 73.
    double exponent = pow (number, 2); // Defines exponent as a mutable variable of type double initialised to 5329 (73 ^ 2).
    std::cout << "73 to the power of 2 = " << exponent << "\n"; // Outputs the value of "exponent" as the result.
    exponent = pow (number, 4); // Assigns the value of 2.83982 * 10 ^ 7 (73 ^ 4) to the variable "exponent."
    std::cout << "73 to the power of 4 = " << exponent; // Outputs the value of "exponent" as the result.
}