#include <iostream>

//Napisz program, który wyœwietli informacje czy liczba jest dodatnia czy nie.
void task1()
{
	int number;
	std::cout << "Podaj liczbê ca³kowit¹:\n";
	std::cin >> number;

	if (number > 0)
		std::cout << "Podana liczba jest dodatnia\n";

	std::cout << "Koniec programu\n";
}


int main()
{
    setlocale(LC_CTYPE, "polish");

	task1();
}
