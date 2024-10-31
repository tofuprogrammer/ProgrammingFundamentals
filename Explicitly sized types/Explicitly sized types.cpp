#include "Include (Explicitly sized types).hpp"

int main()
{
    std::cout << "The size of a double is " << sizeof(double) << " bytes.\n";
    std::cout << "The size of a float is " << sizeof(float) << " bytes.\n";
    std::cout << "The size of a int is " << sizeof(int) << " bytes.\n";
    std::cout << "The size of a long is " << sizeof(long) << " bytes.\n";
    std::cout << "The size of a long long is " << sizeof(long long) << " bytes.\n";
    std::cout << "The size of a bool is " << sizeof(bool) << " byte.\n";
    std::cout << "The size of a short is " << sizeof(short) << " bytes.\n";
    std::cout << "The size of a char is " << sizeof(char) << " byte.\n";
    std::cout << '\n';
    std::cout << "The size of an unsigned int is " << sizeof(unsigned int) << " bytes.\n";
    std::cout << "The size of an unsigned long is " << sizeof(unsigned long) << " bytes.\n";
    std::cout << "The size of an unsigned long long is " << sizeof(unsigned long long) << " bytes.\n";
    std::cout << "The size of an unsigned short is " << sizeof(unsigned short) << " bytes.\n";
    std::cout << "The size of an unsigned char is " << sizeof(unsigned char) << " byte.\n";
    // The unsigned modifier does not affect the size of the types.
    std::cout << '\n';
    const uint8_t unsignedOneByte = 10;
    const uint16_t unsignedTwoBytes = 20;
    const uint32_t unsignedFourBytes = 30;
    const uint64_t unsignedEightBytes = 40;
    std::cout << sizeof(unsignedOneByte) << '\n';
    std::cout << sizeof(unsignedTwoBytes) << '\n';
    std::cout << sizeof(unsignedFourBytes) << '\n';
    std::cout << sizeof(unsignedEightBytes) << '\n';
    std::cout << '\n';
    const int8_t signedOneByte = -10;
    const int16_t signedTwoBytes = -20;
    const int32_t signedFourBytes = -30;
    const int64_t signedEightBytes = -40;
    std::cout << sizeof(signedOneByte) << '\n';
    std::cout << sizeof(signedTwoBytes) << '\n';
    std::cout << sizeof(signedFourBytes) << '\n';
    std::cout << sizeof(signedEightBytes) << '\n';
    // The sizes of the variables are as expected
    std::cout << '\n';
    bool aBoolean = true;
    std::cout << checkBoolSize(aBoolean);
}
