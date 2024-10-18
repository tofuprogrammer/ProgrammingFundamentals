#include <iostream>
#include <iomanip>

#define PI 3.141592
#define DEG_TO_RAD(deg) ((deg) * (PI/180))
#define COUNTDOWN for (int counter = 10; counter >= 1; counter--) std::cout << counter << '\n'
#define PRINT std::cout <<

#define FORLOOP(A, B) for (int i = (A); i <= (B); i++) std::cout << i << '\n'

#define UNTIL(X) while (!(X))
int main()
{
    std::cout << std::fixed << std::setprecision (6) << "Pi = " << PI << '\n';

    double degrees;
    std::cout << "Enter a number: ";
    std::cin >> degrees;
    double radians = DEG_TO_RAD(degrees);
    std::cout << degrees << " degrees = " << radians << " radians" << '\n';

    COUNTDOWN;

    PRINT "hi" << '\n';
    PRINT "hello there" << '\n';

    FORLOOP(1, 10);

    int number = 0;
    UNTIL(37 == 2) // CAREFUL! This currently loops infinitely!
    {
    number++;
    std::cout << number << '\n';
    }
}