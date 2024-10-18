#include <iostream>

int square (int number)
{
    return number * number;
}
int main()
{
    int user_number;
    std::cout << "Enter a number: ";
    std::cin >> user_number;
    int result = square (user_number);
    std::cout << user_number << " squared is " << result;
}
