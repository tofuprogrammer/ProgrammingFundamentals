#include <iostream>

int main()
{
    std::cout << "1)" << '\n';
    float player_1_health = 25.0f;
    float player_2_health = 50.0f;
    float* current_health = &player_1_health;
    *current_health = 5.0f;
    std::cout << player_1_health << '\n';
    current_health = &player_2_health;
    *current_health = 10.0f;
    std::cout << player_2_health << '\n';

    std::cout << '\n';

    std::cout << "2)" << '\n';
    int number_1 = 53;
    int number_2 = 72;
    int temp_number;
    std::cout << number_1 << '\n';
    std::cout << number_2 << '\n';
    int* a_number = &number_1;
    temp_number = *a_number;
    *a_number = number_2;
    number_2 = temp_number;
    number_1 = *a_number;
    std::cout << number_1 << '\n';
    std::cout << number_2 << '\n';

    std::cout << '\n';

    std::cout << "3)" << '\n';
    int result = *a_number;
    *a_number = number_2;
    result += *a_number;
    std::cout << result << '\n';

    std::cout << '\n';

    std::cout << "4)" << '\n';
    int array_of_ints[5];
    array_of_ints[0] = 14;
    array_of_ints[1] = 36;
    array_of_ints[2] = 53;
    array_of_ints[3] = 62;
    array_of_ints[4] = 99;
    int* array_ptr = array_of_ints;
    *array_ptr = array_of_ints[0];
    std::cout << "a." << '\n';
    std::cout << *array_ptr << '\n';
    *array_ptr = array_of_ints[1];
    std::cout << "b." << '\n';
    std::cout << *array_ptr << '\n';
    *array_ptr = array_of_ints[4];
    std::cout << "c." << '\n';
    std::cout << *array_ptr << '\n';

    std::cout << '\n';

    std::cout << "5)" << '\n';
    struct Vector2
    {
        float x;
        float y;
    };
    Vector2 vector_1, vector_2;
    vector_1.x = 43.7f;
    vector_1.y = -53.2f;

    vector_2.x = -20.2f;
    vector_2.y = -8.1f;
    
    std::cout << "Instance 1" << '\n';
    std::cout << vector_1.x << '\n';
    std::cout << vector_1.y << '\n';
    std::cout << "Instance 2" << '\n';
    std::cout << vector_2.x << '\n';
    std::cout << vector_2.y << '\n';
    std::cout << '\n'; 
    float* x_pointer = &vector_1.x;
    float* y_pointer = &vector_1.y;
    vector_2.x = *x_pointer;
    vector_2.y = *y_pointer;
    
    std::cout << "Instance 1" << '\n';
    std::cout << vector_1.x << '\n';
    std::cout << vector_1.y << '\n';
    std::cout << "Instance 2" << '\n';
    std::cout << vector_2.x << '\n';
    std::cout << vector_2.y << '\n';
}