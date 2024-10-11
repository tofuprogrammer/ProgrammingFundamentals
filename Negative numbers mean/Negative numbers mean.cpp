#include <iostream>

int main()
{
	float input_number = 0; // Creates a float called "input_number" and assigns the value of 0 to it
	float sum_of_numbers = 0; // Creates a float called "sum_of_numbers" and assigns the value of 0 to it
	int increments = 0; // Creates an integer called "increments" and assigns the value of 0 to it
	float mean_of_numbers = 0; // Creates a float called "mean_of_numbers" and assigns the value of 0 to it
	while (input_number >= 0) // Executes until a negative number is entered by the user
	{
		std::cout << "Enter a number: "; 
		std::cin >> input_number;
		sum_of_numbers += input_number;
		increments++;
	}
	mean_of_numbers = (sum_of_numbers / increments);
	std::cout << "The mean of the numbers you entered is " << (sum_of_numbers / increments) << "!\n";
}