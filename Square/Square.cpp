#include <iostream>

int Square (int number)
{
    return number * number;
}
int main()
{
    int user_number;
    std::cout << "Enter a number: ";
    std::cin >> user_number;
    int result = Square (user_number);
    std::cout << user_number << " squared is " << result;
}
