/* Broken code

float CountPunctuation()
{
    int counter;

    for (int i = 0; i <= str.size(); i + 1)
    {
        if (str[i] == '.' || '!' || '?')
            counter += 1;
    }
    return counter;
}
No "int main()" so the code is not executed
The identifier "str" is not assigned to anything
The variable "counter" has not been initialised
str[i] is not checked against '!' and '?' so the if statement is always true
i += 1 does not increment the counter correctly so the function loops infinitely */

#include <string>

float countPunctuation()
{
    int counter = 0;
    std::string str = "This . Is ! A ? String";
    for (int i = 0; i <= str.size(); i++)
    {
        if (str[i] == '.' || str[i] == '!' || str[i] == '?')
            counter++;
    }
    return counter;
}

int main()
{
    countPunctuation();
}