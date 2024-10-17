#include <iostream>

int Multiply (int number_a, int number_b)
{
    return number_a * number_b;
}
int main()
{
    int user_number_a;
    std::cout << "Enter a number: ";
    std::cin >> user_number_a;
    int user_number_b;
    std::cout << "Enter another number: ";
    std::cin >> user_number_b;
    int result = Multiply (user_number_a, user_number_b);
    std::cout << user_number_a << " multiplied by " << user_number_b << " is " << result;
}
