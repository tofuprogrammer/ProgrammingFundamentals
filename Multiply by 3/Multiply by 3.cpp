#include <iostream>

int Multiply_By_3 (int number)
{
    return number * 3;
}
int main()
{
    int user_number;
    std::cout << "Enter a number: ";
    std::cin >> user_number;
    int result = Multiply_By_3 (user_number);
    std::cout << user_number << " multiplied by 3 is " << result;
}
