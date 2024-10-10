#include <iostream> // Allows usage of input and output functions such as std::cout.

int main() // Starting point for the program.
{
    std::cout << "5 < 1 is " << (5 < 1) << "\n"; // Outputs 0 (false)
    std::cout << "5 > 1 is " << (5 > 1) << "\n"; // Outputs 1 (true)
    std::cout << "5 == 1 is " << (5 == 1) << "\n"; // Outputs 0 (false)
    std::cout << "90 != 90 is " << (90 != 90) << "\n"; // Outputs 0 (false)
    std::cout << "(-5 * 2) == (5 * 2) is " << ((-5 * 2) == (5 *2)) << "\n"; // Outputs 0 (false)
}
