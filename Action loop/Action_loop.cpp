#include <corecrt_startup.h>
#include <iostream>

int main()
{
    bool quit = false;
    std::string command = "start";
    while (quit == false)
    {
        std::cout << "Enter a command: ";
        std::cin >> command;

        if (command == "hi")
        {
            std::cout << "Hello!\n";
        }
        else if (command == "quit")
        {
            std::cout << "Quitting!...";
            quit = true;
        }
        else
        {
            std::cout << "Invalid command!\n";
        }
    }
}
