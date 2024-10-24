#include <iostream>
#include <string>

#include "countof.hpp"

int main()
{
    int a_few_ints[3];

    a_few_ints[0] = -5;
    a_few_ints[1] = -10;
    a_few_ints[2] = -15;

    struct Player_Info
    {
        std::string player_name;
        int player_age;
    };
    
    Player_Info player_info[4];

    float hundred_floats[100] = {};

    std::cout << _countof (a_few_ints) << " items" << '\n';
    std::cout << sizeof (a_few_ints) << " bytes" << '\n';
    std::cout << '\n';
    std::cout << _countof (player_info) << " items" << '\n';
    std::cout << sizeof (player_info) << " bytes" << '\n';
    std::cout << '\n';
    std::cout << _countof (hundred_floats) << " items" << '\n';
    std::cout << sizeof (hundred_floats) << " bytes" << '\n';
    std::cout << '\n';

    int an_int;
    std::string a_string;
    
    std::cout << "An int is " << sizeof (an_int) << " bytes in memory" << '\n';
    std::cout << "A string is " << sizeof (a_string) << " bytes in memory" << '\n';
    std::cout << '\n';
    std::cout << array_length(*a_few_ints);
}
