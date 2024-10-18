#include "Header.hpp"
#include "Console.hpp"

void set_cursor(int x, int y)
{
    std::cout << "\x1b[" << y << ";" << x << "H";
}
void clear_rows(int rows)
{
    std::cout << "\x1b[" << rows << "M";
}
void set_background_colour(int background_colour)
{
    std::cout << "\033[" << background_colour << "m";
}
/* void set_foreground_colour(int foreground_colour)
{
    std::cout << "\033[" << foreground_colour << "m";
}
This function is redundant */

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

    set_foreground_colour(33);
    // set_background_colour(34); This functions does the same as set_foreground_colour
    std::cout << "a";
    set_cursor(10, 10);
    std::cout << "b";
    set_cursor(20, 20);
    std::cout << "c";
    clear_rows(30);    
}
