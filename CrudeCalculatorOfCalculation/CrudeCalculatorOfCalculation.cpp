//this is the new rewritten version, now with less garbage goin on, completely built back from the ground up
//version for windows
#include <iostream>
#include <Windows.h>   //used for window title, try seeing if the bash alternative works 

int Subtraction();
int Addition();
int Multiply();		//forward declaration hell
void Start();
int Sub1{};
int Sub2{};
int Mult1{};
int Mult2{};
int Add1{};
int Add2{};
std::string mathinterpreter{};
bool validinput;

int main(void)
{
	SetConsoleTitle(L"CrudeCalculatorOfCalculation");
	Start();
};


void Start()
{
	std::cout << "Welcome to the CrudeCalculatorOfCalculation.\n";
	std::cout << "This is version v1.1/2R\n";
	std::cout << "Created by SudoNotNoted2007\n";
	std::cout << "\nWhat math would you want to do today? (Type the number and press enter!)\n";
	std::cout << "\nType 1 for Addition\nType 2 for Subtraction\nType 3 for Multiplication\nDivision is currently unavailable (due to floating point math working differently.)\n";
	std::cin >> mathinterpreter;
	if (mathinterpreter == "1")
	{
		validinput = true;
		Addition;
	}
	else if (mathinterpreter == "2")
	{
		validinput = true;
		Subtraction;
	}
	else if (mathinterpreter == "3")
	{
		validinput = true;
		Multiply;
	}
	//else if (mathinterpreter == "4")
	//{
	//	validinput = true;
	//	std::cout << "placeholder\n";
	//	std::cout << validinput;
	//	system("pause");
	//}
	else
	{
		validinput = false;
		system("cls");
		std::cout << "Not a valid input. Try again.\n";
		Sleep(1200);
		system("cls");
		Start();
	};
	int Addition();
	{
		system("cls");
		std::cout << "Type in your first addition value:\n";
		std::cin >> Add1;
		std::cout << "Your second addition value:\n";
		std::cin >> Add2;
		std::cout << "\nYour answer (probably) is: " << Add1 + Add2 << std::endl;
		std::cout << "\nIf there was an error, please report this issue to the GitHub, or help contribute!\n";
		system("pause");
		std::cout << "\nReturning to start...";
		Sleep(1200);
		system("cls");
		Sleep(200);
		Start();
	};
	int Subtraction();
	{
		system("cls");
		std::cout << "Type in your first subtraction value:\n";
		std::cin >> Sub1;
		std::cout << "Your second subtraction value:\n";
		std::cin >> Sub2;
		std::cout << "\nYour answer (probably) is: " << Sub1 - Sub2 << std::endl;
		std::cout << "\nIf there was an error, please report this issue to the GitHub, or help contribute!\n";
		system("pause");
		std::cout << "\nReturning to start...";
		Sleep(1200);
		system("cls");
		Sleep(200);
		Start();
	};
	int Multiply();
	{
		system("cls");
		std::cout << "Type in your first multiplication value:\n";
		std::cin >> Mult1;
		std::cout << "Your second multiplication value:\n";
		std::cin >> Mult2;
		std::cout << "\nYour answer is: " << Mult1 * Mult2 << std::endl;
		std::cout << "\nIf there was an error, please report this issue to the GitHub, or help contribute!\n";
		system("pause");
		std::cout << "\nReturning to start...";
		Sleep(1200);
		system("cls");
		Sleep(200);
		Start();
	};
};

