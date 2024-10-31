#pragma once

inline bool checkBoolSize(bool aBool)
{
    if (sizeof(aBool) > 1)
    {
        return true;
    }
    return false;
}
