/* Broken code

struct Stage
{
    int stageIndex;
    bool completed;
};

bool isLevelOver(int playerScore, Stage* stages, int stagesSize)
{
    bool hasEnoughScore = playerScore => 100;

    int count = 0;

    for (int i = 0; i < stagesSize; i++);
    {
        if (stages[i].completed)
            count += 1;
        std::cout << "stage " << i << " completed!";
    }
    return (hasEnoughScore & count >= 10)
}
iostream not included
no int main()
=> is not a valid expression, >= should be used instead
; should not be at the end of the for loop
No '\n' at the end of the output string
No ; at the end of the return statement */

#include <iostream>

struct Stage
{
    int stageIndex;
    bool completed;
};

bool isLevelOver(int playerScore, Stage* stages, int stagesSize)
{
    bool hasEnoughScore = playerScore >= 100;

    int count = 0;

    for (int i = 0; i < stagesSize; i++)
    {
        if (stages[i].completed)
            count += 1;
        std::cout << "stage " << i << " completed!\n";
    }
    return (hasEnoughScore & (count >= 10));
}

int main()
{
    Stage stages[] = {{0, true}, {1, true}, {2, false}};
    isLevelOver(430, stages, 3);
}