#pragma once
inline int sum (int a, int b)
{
    return a + b;
}
inline int mul (int a, int b)
{
    return a * b;
}
inline int sub (int a, int b)
{
    return a - b;
}
inline int mul_by_3 (int a)
{
    return a * 3;
}
inline bool odd_or_even (int a)
{
    if (a % 2 == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
inline int square (int a)
{
    return a * a;
}