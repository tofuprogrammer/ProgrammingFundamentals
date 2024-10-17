#include <iostream>
#include <string>

std::string Return_String (std::string string_to_return)
{
    return string_to_return;
}
int main()
{
    std::string user_string;
    std::cout << "Enter some text: ";
    std::cin >> user_string;
    std::string result = Return_String (user_string);
    std::cout << "The text you entered is " << result;
}
