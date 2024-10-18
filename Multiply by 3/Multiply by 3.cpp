#include <iostream>

int multiply_By_3 (int number)
{
    return number * 3;
}
int main()
{
    int user_number;
    std::cout << "Enter a number: ";
    std::cin >> user_number;
    int result = multiply_By_3 (user_number);
    std::cout << user_number << " multiplied by 3 is " << result;
}
