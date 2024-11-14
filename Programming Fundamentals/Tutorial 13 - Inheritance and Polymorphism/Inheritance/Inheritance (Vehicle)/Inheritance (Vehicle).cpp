#include <iostream>
#include <string>

int main() {
    class Vehicle {
    public:
        int wheels = 4;
        std::string Noise(){
            return "Vehicle noise";
        }
    };
    class Car : public Vehicle {
    };
    class SportsCar : public Car{
    public:
        std::string speed = "Fast";
    };
    SportsCar sportsCar;
    std::cout << sportsCar.Noise() << '\n';
}
