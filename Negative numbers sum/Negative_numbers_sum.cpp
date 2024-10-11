#include <iostream>

int main()
{
	int input_number = 0;
	int sum_of_numbers = 0;
	while (input_number >= 0)
	{
		std::cout << "Enter a number: ";
		std::cin >> input_number;
		sum_of_numbers += input_number;
	}
	std::cout << "The sum of the numbers you entered is " << sum_of_numbers << " !\n";
}