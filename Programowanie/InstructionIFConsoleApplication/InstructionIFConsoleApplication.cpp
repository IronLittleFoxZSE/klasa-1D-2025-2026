#include <iostream>

/*
Operatry warunkowe:
>		- wi�kszy
<		- mniejszy
>=		- wiekszy b�d� r�wny
<=		- mniejszy b�d� r�wny
==		- r�wny
!=		- r�ny

*/

//Napisz program, kt�ry wy�wietli informacje czy liczba jest dodatnia czy nie.
void task1()
{
	int number;
	std::cout << "Podaj liczb� ca�kowit�:\n";
	std::cin >> number;

	if (number > 0)
		std::cout << "Podana liczba jest dodatnia\n";

	if (number < 0)
		std::cout << "Podana liczba jest ujemna\n";

	if (number = 0)
		std::cout << "Podana liczba nie jest dodatnia ani ujemna\n";

	std::cout << "Koniec programu\n";
}


int main()
{
	setlocale(LC_CTYPE, "polish");

	task1();
}
