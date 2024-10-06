// Euler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> // Allows usage of input and output functions such as std::cout.
#include <iomanip>  // Allows usage of the setprecision function
#include <cmath>    // Allows usage of the abs() function

int main() // Starting point for the program.
{
    const double value = 2.71828; // Defines "value" as a constant variable of type double (double precision floating point) initialised to a value of 2.71828. This is the target value.
    const double precision = 1e-5; // Defines "precision" as a constant variable of type double (double precision floating point) initialised to a value of 0.00001. This is the acceptable range of the value the program is looking for.
    double approx_e_value = 1.0; // Defines "approx_e_value" as a mutable variable of type double (double precision floating point) initialised to a value of 1.0. This tracks the approximate value of e that has been calculated most recently.
    double factorial_value = 1.0;  // Defines "factorial_value" as a mutable variable of type double (double precision floating point) initialised to a value of 1.0. This tracks the value of the factorial used as the denominator in Euler's formula.
    int iterations = 1;  // Defines "iterations" as a mutable variable of type int (integer) initialised to a value of 1. This tracks how many iterations the program has gone through.

    while (std::abs(approx_e_value - value) > precision) // The code inside this while loop will run until the absolute value of the approximate calculated value of e minus the true value of e is less than the value of the variable "precision" as this indicates that an approximate value of e to 5 d.p. has been found.
    {
        std::cout << "The current approximate value of e is: " << approx_e_value << std::endl; // Displays the most recently calculated approximate value for e until a suitable value is found, it begins at 1.0.
        factorial_value *= iterations; // Multiplies the value of the "factorial_value" variable by the number of iterations to find the next factorial value.
        approx_e_value += 1.0 / factorial_value; // Applies Euler's formula to the most recently calculated approximate value for e to find the new value.
        ++iterations; // Increments the variable that stores the number of iterations by 1.
    }
    std::cout << "The approximate value of e (" << std::setprecision(6) << approx_e_value <<") has been found after " << iterations << " iterations."; // Outputs the result.
}