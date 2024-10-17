// ReSharper disable CppClangTidyClangDiagnosticImplicitFloatConversion
#include <iostream>

int main()
{
    float num = -14.7;
    float power = 3.2;
    std::cout << powf (num, power) << '\n'; // Takes the float 'num' and raises it to the power of 'power'
    std::cout << sqrtf (num) << '\n'; // Outputs the square root of 'num'
    std::cout << fabsf (num) << '\n'; // Outputs the absolute value of 'num'
    std::cout << sinf (num) << '\n'; // Outputs the sine of 'num', taking 'num' in radians
    std::cout << cosf (num) << '\n'; // Outputs the cosine of 'num', taking 'num' in radians
}