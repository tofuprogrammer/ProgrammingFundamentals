/* Broken code

int main(int argc, char* argv[])
{
    char someString[] = "this is an example";
    char* strPtr = someString;
    
    strPtr += 11;
    (*strPtr)++; 
 
    strPtr -= 5; 
    *(someString + 1) = *someString;
    *(someString + 2) = strPtr[2];
    *someString = *(someString + 3);
 
    strPtr += 5;
    someString[3] = someString[4] = *strPtr;
 
    *(strPtr - 6) = *(strPtr - 5);
    strPtr -= 4;
    *(--strPtr) = 0;
 
    std::cout << someString << std::endl;
 
    return 0;
}
 */

#include <iostream>

int main()
{
    char someString[] = "this is an example"; // Creates an array of characters
    char* strPtr = someString; // Creates a pointer at the beginning of the array
    
    strPtr += 11; // Moves the pointer to the 11th character 'e'
    (*strPtr)++; // Increments 'e' by 1 to make it 'f'
 
    strPtr -= 5; // Drops pointer back by 5 to ' '
    *(someString + 1) = *someString; // Sets the second character in the array 'h' to be the same as the first ('t')
    *(someString + 2) = strPtr[2]; // Sets the third character 'i' to the character two characters after the current location of strPtr 'a'
    *someString = *(someString + 3); // Sets the first character 't' to the 4th character 's'
 
    strPtr += 5; // Moves strPtr 5 characters up to point to 'a'
    someString[3] = someString[4] = *strPtr; // Sets the 4th and 5th characters 's' and ' ' to 'a'
 
    *(strPtr - 6) = *(strPtr - 5); // Sets the character six characters before strPtr ' ' to the character five positions before strPtr, also ' '
    strPtr -= 4; // Moves strPtr back by 4 's'
    *(--strPtr) = 0; // Decrements strPtr, so it now points to ' ', and sets it to 0, making it the new end of the string
 
    std::cout << someString << '\n'; // Outputs the final result
}