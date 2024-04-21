#include <iostream>
#include <array>
#include <iomanip>
#include <cmath>
using namespace std;


void convertdollar()
{
	double Dollars, Pesos;
	std::cout << "To convert Dollars to Pesos input the of Dollars you have: \n";
	std::cin >> Dollars;
	Pesos = Dollars * 17.1005;
	std::cout << "You have " << fixed << setprecision(2) << Pesos << " Pesos.\n";
}

void convertftc()
{
	double Fahrenheit = 0.0, Celsius = 0.0;
	std::cout << "To convert fahrenheit to celsius input degress fahrenheit: \n";
	std::cin >> Fahrenheit;
	Celsius = (Fahrenheit - 32) * 5 / 9;
	std::cout << "Degrees in celsius = " << Celsius << "\n";
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
}

void RaiseNumber()
{
	int X, Y, Total;
	std::cout << "Input X and Y too raise X to the power of Y: \n";
	std::cin >> X >> Y;
	Total = pow(X, Y);
	std::cout << "The expression is equal to " << Total << "\n";
}

void EvenOdd()
{
	int number;
	std::cout << "Input a number too see if it is Even or Odd";

}

int main()
{
	





	return 0;
}