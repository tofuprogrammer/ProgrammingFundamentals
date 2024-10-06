#define _USE_MATH_DEFINES // Allows the use of M_PI to easily define pi.

#include <iostream> // Allows usage of input and output functions such as std::cout.

int main() // Starting point for the program.
{
    const int degrees = 65; // Defines "degrees" as a constant variable of type int (integer) and initialises it to the value 65.
    const float radian_factor = (M_PI / 180); // Defines "radian_factor" as a constant variable of type double (double precision floating point) and initialises it to the value pi / 180.
    std::cout << "65 degrees = " << (degrees * radian_factor) << " radians"; // Outputs "65 degrees = 1.13446 (65 * (pi / 180)) radians" (without the double quotes) without a new line.
}