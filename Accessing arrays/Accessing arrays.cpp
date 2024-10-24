#include <iostream>
#include <string>

int main()
{
    int a_few_ints[3];

    a_few_ints[0] = -5;
    a_few_ints[1] = -10;
    a_few_ints[2] = -15;
    std::cout << a_few_ints[0] << '\n';
    std::cout << a_few_ints[1] << '\n';
    std::cout << a_few_ints[2] << '\n';

    struct Player_Info
    {
        std::string player_name;
        int player_age;
    };
    
    Player_Info player_info[4];

    float hundred_floats[100] = {};
    
    std::cout << hundred_floats[18] << '\n';
    std::cout << hundred_floats[23] << '\n';
    std::cout << hundred_floats[35] << '\n';

    bool single_element[1];
    std::cout << single_element[5] << '\n'; // Rider gives a warning that array index 5 is beyond the end of the array but compiles without warnings
    std::cout << single_element[-1] << '\n'; // Rider gives a warning that array index 5 is beyond the end of the array but compiles without warnings
    // Both output 204
}