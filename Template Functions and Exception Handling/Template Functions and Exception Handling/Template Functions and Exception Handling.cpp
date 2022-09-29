// Template Functions and Exception Handling.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Chris Miller C++ Programmer 
//Homework 08
// 👻 Happy 🎃 Halloween ⚰️


#include <iostream>
#include <iomanip>
#include <string>



template <typename T> //Template that acts as a datatype that is passed

T Discriminant(T a, T b, T c) //Function that will solve the math equation from any datatype
{
	T d = (b * b) - (4.0 * a * c); //Math equation from the homework( b(to the power 2) - 4ac  )

	if (d < 0)
	{
		throw std::exception("Discriminant(a, b, c): Negative Discriminant Encountered");
	}

	return d;
}


int main()
{
	char repeater; //User input variable
	do
	{

		try
		{
			//set up variables
			double a;
			double b;
			double c;


			//Prompt user for inputs
			std::cout << "Enter a: ";
			std::cin >> a;
			std::cout << "Enter b: ";
			std::cin >> b;
			std::cout << "Enter c: ";
			std::cin >> c;

			double d = Discriminant(a, b, c);

			std::cout << std::fixed << std::setprecision(2);
			std::cout << "Descriminant: " << d << std::endl;
		}

		catch (const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}

		do
		{

			std::cout << "Do you want to continue?  [Y/N]: "; //Prompts the user if he wants to continue the program

			std::cin >> repeater; //Gets input from the user

			repeater = toupper(repeater) //Makes the input a capital letter

		} while ((repeater != 'Y') && (repeater != 'N'));

	} while (repeater == 'Y'); //if user types n it will end the program

	system("PAUSE"); //Pauses the program before ending it so user can see results.
	return 0;
}

