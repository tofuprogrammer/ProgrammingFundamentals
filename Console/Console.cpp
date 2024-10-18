#include "Console.h"

void set_cursor(int x, int y)
{
    std::cout << "\x1b[" << y << ";" << x << "H";
}
void clear_rows(int rows)
{
    std::cout << "\x1b[" << rows << "M";
}

