// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iostream>

void CalculateNumbers()
{
	int a = 7;
	int b = 8;

	int subtraction = a - b;

	std::cout << "The subtraction of a and b is\n" << subtraction;

}

int main()
{
	// floats are decimal numbers
	float health = 100.0f;
	float damage = 2.0f;

	float remainingHealth = health + damage;


	int a = 7;
	int b = 8;

	int multiplication = a * b;

	health = 20.0f;

	std::cout << "The multiplication of a and b is\n" << multiplication;

	CalculateNumbers();
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
