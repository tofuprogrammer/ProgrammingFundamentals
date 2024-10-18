#include "Header.h"

int main()
{
    int number_a;
    int number_b;
    
    std::cout << "Enter an integer: ";
    std::cin >> number_a;
    std::cout << "Enter another integer: ";
    std::cin >> number_b;
    
    int result = sum(number_a, number_b);
    std::cout << number_a << " + " << number_b << " = " << result << '\n';
    
    result = mul(number_a, number_b);
    std::cout << number_a << " * " << number_b << " = " << result << '\n';
    
    result = sub(number_a, number_b);
    std::cout << number_a << " - " << number_b << " = " << result << '\n';
}
