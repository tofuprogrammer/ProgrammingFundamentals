#include <iostream>

int main()
{
    char* a_pointer = (char*)10;
    std::cout << a_pointer;
    a_pointer += 2;
    std::cout << a_pointer;
    // Blank output followed by access violation error
}