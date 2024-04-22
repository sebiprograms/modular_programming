#include <iostream>
#include <array>
#include <iomanip>
#include <cmath>
using namespace std;
void restart();

void ConvertDollar()
{
	double Dollars, Pesos;
	std::cout << "To convert Dollars to Pesos input the of Dollars you have: \n";
	std::cin >> Dollars;
	Pesos = Dollars * 17.1005;
	std::cout << "You have " << fixed << setprecision(2) << Pesos << " Pesos.\n";
	restart();
}

void ConvertFTC()
{
	double Fahrenheit = 0.0, Celsius = 0.0;
	std::cout << "To convert fahrenheit to celsius input degress fahrenheit: \n";
	std::cin >> Fahrenheit;
	Celsius = (Fahrenheit - 32) * 5 / 9;
	std::cout << "Degrees in celsius = " << Celsius << "\n";
	restart();
}

void CountLetter()
{
	string Name;
	int Letter_Count;
	std::cout << "Please input your name too count its letters: \n";
	std::cin >> Name; 
	for (int i = 0; i < Name.size(); i++)
	{
		Letter_Count = i;
	}
	std::cout << "There are " << Letter_Count + 1<< " amount of letters in the name. \n";
	restart();
}

void RaiseNumber()
{
	int X, Y, Total;
	std::cout << "Input X and Y too raise X to the power of Y: \n";
	std::cin >> X >> Y;
	Total = pow(X, Y);
	std::cout << "The expression is equal to " << Total << "\n";
	restart();
}

void EvenOdd()
{
	int Number;
	std::cout << "Input a number too see if it is Even or Odd: \n";
	std::cin >> Number;
	if (Number % 2 == 0)
	{
		std::cout << "The number " << Number << " is even. \n";
	}
	else if (Number % 2 != 0)
	{
		std::cout << "The number " << Number << " is odd. \n";
	}
	restart();
}
void menu()
{
	int select = 0;
	std::cout << "    Input a number to execute program  \n";
	std::cout << "  [1] Convert Dollars to Pesos\n";
	std::cout << "  [2] Convert Fahrenheit to Celsius\n";
	std::cout << "  [3] Count letters of your name\n";
	std::cout << "  [4] Raise a number x to the power of y\n";
	std::cout << "  [5] Determine if number is even or odd\n";
	std::cout << "  [6] Exit Program\n";
	std::cin >> select;
	if (select == 1)
	{
		ConvertDollar();
	}
	else if (select == 2)
	{
		ConvertFTC();
	}
	else if (select == 3)
	{
		CountLetter();
	}
	else if (select == 4)
	{
		RaiseNumber();
	}
	else if (select == 5)
	{
		EvenOdd();
	}
	else if (select == 6)
	{
		std::cout << "Quiting Program...\n";
		exit;
	}
	else 
	{
		std::cout << "invalid input retry\n";
		menu();
	}
}
void restart()
{
	string yesno;
	std::cout << "Enter yes or no if you'd like to select another program: \n";
	std::cin >> yesno;
	if (yesno == "yes")
	{
		menu();
	}
	else if (yesno == "no")
	{
	std:cout << "quitting program...\n";
		exit;
	}
}


int main()
{
	std::cout << "        Welcome       \n";
	std::cout << "Enter a number 1-6 to choose a program function: \n";
	menu();

	return 0;
}