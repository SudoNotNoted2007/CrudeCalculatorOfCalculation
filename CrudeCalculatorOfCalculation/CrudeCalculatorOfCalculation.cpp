//this is the new rewritten version, now with less garbage goin on, completely built back from the ground up
//version for windows
#include <iostream>
#include <Windows.h>   //used for window title, try seeing if the bash alternative works 

void Subtraction();
void Addition();
void Multiply();		//forward declaration hell
void Start();
void test();
char Sub1{};
char Sub2{};
char Mult1{};
char Mult2{};
char Add1{};
char Add2{};
std::string mathinterpreter{};
char additiontestvalue;
bool validinput;

int main(void)		//probably insures no return value?		never mind main doesn't need to return i think?
{
	SetConsoleTitle(L"CrudeCalculatorOfCalculation");
	Start();
};


void Start()
{
	//resetting variables
	Sub1 = 0;
	Sub2 = 0;
	Add1 = 0;
	Add2 = 0;
	Mult1 = 0;
	Mult2 = 0;
	SetConsoleTitle(L"CurdeCalculatorOfCalculation");
	std::cout << "Welcome to the CrudeCalculatorOfCalculation.\n";
	std::cout << "This is an UNSTABLE release.\n";
	std::cout << "Created by SudoNotNoted2007\n";
	std::cout << "\n(Note: Don't try big numbers right now. The program cannot handle them due to a overflow error.)\n";
	std::cout << "\nWhat math would you want to do today? (Type the number and press enter!)\n";
	std::cout << "\nType 1 for Addition\nType 2 for Subtraction\nType 3 for Multiplication\nDivision is currently unavailable (due to floating point math working differently.)\n";
	std::cout << "\nType E (capitalized) for a list of errors encountered.\n";
	std::cin >> mathinterpreter;
	if (mathinterpreter == "1")
	{
		validinput = true;
		Addition();
	}
	else if (mathinterpreter == "2")
	{
		validinput = true;
		Subtraction();
	}
	else if (mathinterpreter == "3")
	{
		validinput = true;
		Multiply();
	}
	else if (mathinterpreter == "E")
	{
		validinput = true;
		test();
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
		std::cout << "Double-check what you typed, and try again.\n";
		Sleep(1200);
		system("cls");
		Start();
	};
	
	
};
void Addition()
	{
	SetConsoleTitle(L"CrudeAddition");
		system("cls");
		std::cout << "Type in your first addition value:\n";
		std::cin >> Add1;
		std::cout << "Your second addition value:\n";
		std::cin >> Add2;
		//additiontestvalue = std::string(1, Add1) + "+" + std::string(1, Add2);
		//SetConsoleTitleW(additiontestvalue);

		//TODO: remove this garbage in favor of ANSI escape codes
		std::cout << "\nYour answer (probably) is: " << Add1 + Add2 << std::endl;
		std::cout << "\nIf there was an error, please report this issue to the GitHub, or help contribute!\n";
		system("pause");
		std::cout << "\nReturning to start...";
		Sleep(1200);
		system("cls");
		Sleep(200);
		Start();
	};
	
void Subtraction()
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
void Multiply()
	{
		system("cls");
		std::cout << "Type in your first multiplication value:\n";
		std::cin >> Mult1;
		std::cout << "Your second multiplication value:\n";
		std::cin >> Mult2;
		std::cout << "\nYour answer (probably) is: " << Mult1 * Mult2 << std::endl;
		std::cout << "\nIf there was an error, please report this issue to the GitHub, or help contribute!\n";
		system("pause");
		std::cout << "\nReturning to start...";
		Sleep(1200);
		system("cls");
		Sleep(200);
		Start();
	};
void test()
{
	system("cls");
	std::cout << "1. Certain types of invalid inputs sometimes get into a \"Not a valid input. Try again.\" loop.\n";
	system("pause");
	system("cls");
	Start();
};