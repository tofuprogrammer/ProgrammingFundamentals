/* Broken code

void printArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << '\n';
}

int main()
{
    int numbers[] = {3, 4, 5};
    printArray(numbers, sizeof(numbers));
}
iostream is not included
sizeof gives the size in memory of the item being referred to so the function goes out of bounds */

#include <iostream>

void printArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << '\n';
}

int main()
{
    int numbers[] = {3, 4, 5};
    printArray(numbers, std::size(numbers));
}