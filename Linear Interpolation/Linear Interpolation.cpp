#include <iostream> // Allows usage of input and output functions such as std::cout.

int main() // Starting point for the program.
{
    const float a = 10.0f; // Defines "a" as a constant variable of type float (floating point) initialised to a value of 10.
    const float b = 20.0f; // Defines "a" as a constant variable of type float (floating point) initialised to a value of 20.
    const float t = 0.35f; // Defines "a" as a constant variable of type float (floating point) initialised to a value of 0.35.
    std::cout << a + (b - a) * t; // This first subtracts b (20) from a (10), then multiplies the result (10) by t (0.35) to get 3.5, then adds this to a, then outputs the result (13.5). 
}