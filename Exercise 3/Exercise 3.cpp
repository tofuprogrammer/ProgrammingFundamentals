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
 
    std::cout << someString << '\n';
 
    return 0;
}