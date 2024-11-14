#include <iostream>
#include <string>

int main() {
    class Animal {
    public:
        bool isAlive = true;
    protected:
        bool hasHeart = true;
    };
    class Duck : public Animal {
    public:
        std::string Quack() {
            return "Quack";
        }
    };
    Duck duck;
    std::cout << duck.isAlive << '\n';
    // std::cout << duck.hasHeart << '\n'; hasHeart is not visible to the Duck class.
    // It is a protected variable and Duck only inherits Animal's public members.
    std::cout << duck.Quack() << '\n';
}
