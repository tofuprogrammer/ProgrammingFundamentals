#include <iostream>
#include <string>

class Enemy
{
private:
    bool inRadiusOfPlayer;
    bool isDead;
public:
    float damageAmount;
    std::string name;
    Enemy()
    {
        std::cout << "Creating an enemy" << '\n';
        damageAmount = 50.0f;
        name = "Enemy";
        inRadiusOfPlayer = true;
        isDead = false;
    }
    
};

int main()
{
    Enemy basicEnemy;
    basicEnemy.damageAmount = 50.0f;
    basicEnemy.name = "Monster";
    std::cout << basicEnemy.damageAmount << '\n';
    std::cout << basicEnemy.name << '\n';

    std::cout << '\n';

    Enemy defenderEnemy;
    defenderEnemy.damageAmount = 10.0f;
    defenderEnemy.name = "Guard";
    std::cout << defenderEnemy.damageAmount << '\n';
    std::cout << defenderEnemy.name << '\n';

    std::cout << '\n';

    /*
    std::cout << Enemy.inRadiusOfPlayer << '\n';
    std::cout << Enemy.isDead << '\n';
    These values have not been instantiated
    */
}