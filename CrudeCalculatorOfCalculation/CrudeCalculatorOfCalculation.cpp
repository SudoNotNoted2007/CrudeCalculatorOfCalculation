//this is the new rewritten version, now with less garbage goin on, completely built back from the ground up
//version for windows
#include <iostream>
#include <Windows.h>   //used for window title, try seeing if the bash alternative works 

int Subtraction(int Sub1, int Sub2);
int Addition(int Add1, int Add2);
int Multiply(int Mult1, int Mult2);		//lines 6-8 are forward declarations
void Start();
std::string mathinterpreter{};
bool validinput;

int main(void)
{
	Start();
};


void Start()
{
	std::cout << "Welcome to the CrudeCalculatorOfCalculations.\n";
	std::cout << "This is version v1.1/2R\n";
	std::cout << "Created by SudoNotNoted2007\n";
	std::cout << "\nWhat math would you want to do today? (Type the number and press enter!)\n";
	std::cout << "\nType 1 for addition\nType 2 for Subtraction\nType 3 for Multiplication\nDivision is currently unavailable (due to floating point math working differently.)\n";
	std::cin >> mathinterpreter;
	if (mathinterpreter == "1")
	{
		validinput = true;
		std::cout << "placeholder\n";
		std::cout << validinput;
		system("pause");
	}
	else if (mathinterpreter == "2")
	{
		validinput = true;
		std::cout << "placeholder\n";
		std::cout << validinput;
		system("pause");
	}
	else if (mathinterpreter == "3" and validinput == true)
	{
		validinput = true;
		std::cout << "placeholder\n";
		std::cout << validinput;
		system("pause");
	}
	else if (mathinterpreter == "4")
	{
		validinput = true;
		std::cout << "placeholder\n";
		std::cout << validinput;
		system("pause");
	}
	else
	{
		validinput = false;
		std::cout << "incorrect input";
		Start();
	}
};