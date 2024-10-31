#include <iostream>

int main()
{
    std::cout << 0b1101 << '\n';
    std::cout << 0321 << '\n';
    std::cout << 0x10 << '\n';
    std::cout << '\n';
    // 8 bits in a byte
    // So the max value a 1 byte unsigned number can hold is 0b11111111
    std::cout << 0b11111111 << '\n';
    // Or 255
    std::cout << '\n';
    // Hex takes 4 bits per character
    // So the max value of a 4 byte unsigned number in hex is 0xffffffff
    std::cout << 0xffffffff << '\n';
    // Or 4294967295
    std::cout << '\n';
    std::cout << 0b10 << '\n'; // Binary: 2
    std::cout << 010 << '\n'; // Octal: 8
    std::cout << 10 << '\n'; // Decimal: 10
    std::cout << 0x10 << '\n'; // Hexadecimal: 16

    // Binary is used by computers
    // Octal is used in old codebases, such as those written in C
    // Hexadecimal is used for memory addresses
}