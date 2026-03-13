// CharactersConsoleApplication.cpp 

#include <iostream>

//Napisz program który pobierze znak od u¿ytkownika i wyœwieli go.
void task1()
{
	char characterFromUser;
	std::cout << "Podaj znak\n";
	std::cin >> characterFromUser;

	std::cout << "Poda³eœ znak:" << characterFromUser << "\n";
}

//Napisz program, który wczyta znak z klawiatury 
//i sprawdzi czy jest to ma³a litera alfabetu.
//ZADANIE:
//* czy jest to du¿a litera alfabetu
//* czy  jest to znak cyfry
void task2()
{
	char characterFromUser;
	std::cout << "Podaj znak\n";
	std::cin >> characterFromUser;

	//if (characterFromUser >= 97 && characterFromUser <= 122)
	if (characterFromUser >= 'a' && characterFromUser <= 'z')
		std::cout << "Jest to ma³a litera alfabetu\n";
	else
		std::cout << "Nie jest to ma³a litera alfabetu\n";

	/*
	char x;
	x = 'a';
	std::cout << x<<"\n";
	x = x + 2;
	std::cout << x << "\n";
	x = 'b' + 2;
	std::cout << x << "\n";
	*/
}

int main()
{
	setlocale(LC_CTYPE, "polish");

	task2();
}
