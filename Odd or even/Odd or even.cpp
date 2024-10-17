#include <iostream>

bool Odd_Or_Even (int number)
{
    if (number % 2 == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int user_number;
    std::cout << "Enter a number: ";
    std::cin >> user_number;
    bool result = Odd_Or_Even(user_number);
    if (result == true)
    {
        std::cout << "The number you entered is odd";
    }
    else
    {
        std::cout << "The number you entered is even";
    }
}
