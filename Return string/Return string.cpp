#include <iostream>
#include <string>

std::string return_string ()
{
    return "String";
}
int main()
{
    std::string string_to_return = return_string();
    std::cout << string_to_return;
}
