#include <iostream> // Allows usage of input and output functions such as std::cout.

int main() // Starting point for the program.
{
    const float percentage = (43.0f / 100.0f); // Defines "percentage" as a constant variable of type float (floating point) initialised to a value of 0.43 (43.0 / 100.0).
    const int number = 18;  // Defines "number" as a constant variable of type float (floating point) initialised to a value of 18.
    std::cout << percentage * number; // Multiplies the stored values of percentage (0.43) and number (18) then outputs the result (7.74).
}