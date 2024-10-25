#include <iostream>

int main()
{
    float player_1_health = 50.0f;
    std::cout << &player_1_health << '\n';
    float player_2_health = 25.0f;
    std::cout << &player_2_health << '\n';
    float* current_health = &player_1_health;
    std::cout << current_health << '\n'; // The address matches
    current_health = &player_2_health;
    std::cout << current_health << '\n'; // The address matches
    std::cout << &current_health << '\n';
}