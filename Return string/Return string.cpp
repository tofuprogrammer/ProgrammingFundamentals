#include <iostream>
#include <string>

std::string Return_String ()
{
    return "String";
}
int main()
{
    std::string string_to_return = Return_String ();
    std::cout << string_to_return;
}
