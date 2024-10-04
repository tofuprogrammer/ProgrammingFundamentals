// Euler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    double n = 1;
    double value = 1;
    while (value != 2.71828) {
        value = value + (1 / tgamma(n + 1));
        n++;
    }
    std::cout << "It took " << n + 1 << " attempts to find the value of e to 5 decimal places, therefore it requires " << n + 1 << " summed terms";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
