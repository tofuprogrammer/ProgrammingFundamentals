#include <iostream> // Allows usage of input and output functions such as std::cout.

int main() // Starting point for the program.
{
    const float half = (1.0 / 2.0); // Defines "half" as a constant variable of type float (floating point) initialised to a value of 0.5 (1.0 / 2.0).
    const float three_quarters = (3.0 / 4.0); // Defines "three_quarters" as a constant variable of type float (floating point) initialised to a value of 0.75 (3.0 / 4.0).
    std::cout << half + three_quarters; // Adds the stored values of half (0.5) and three_quarters (0.75) together and outputs the result (1.25).
}