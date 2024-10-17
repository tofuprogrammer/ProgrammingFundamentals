#include <iostream>

int Addition (int number_a, int number_b)
{
    return number_a + number_b;
}
int main()
{
    int user_number_a;
    std::cout << "Enter a number: ";
    std::cin >> user_number_a;
    int user_number_b;
    std::cout << "Enter another number: ";
    std::cin >> user_number_b;
    int result = Addition (user_number_a, user_number_b);
    std::cout << user_number_a << " plus " << user_number_b << " is " << result;
}