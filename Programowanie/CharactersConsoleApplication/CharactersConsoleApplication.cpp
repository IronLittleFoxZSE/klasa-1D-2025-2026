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

	//if (characterFromUser >= 65 && characterFromUser <= 90)
	if (characterFromUser >= 'A' && characterFromUser <= 'Z')
		std::cout << "Jest to du¿a litera alfabetu\n";
	else
		std::cout << "Nie jest to du¿a litera alfabetu\n";
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

//Napisz program, który poprosi cie o twoje imiê i ciê przywita.
void task3()
{
	std::string userName;
	std::cout << "Podaj imiê:\n";
	std::cin >> userName;

	std::cout << "Witaj " << userName << " tutaj.\n";
}

//Program sprawdzaj¹cy czy podane has³o jest poprawne 
//(np. jeœli has³o jest "abc123", program powinien wyœwietliæ "has³o poprawne", 
//jeœli jest inne, powinien wyœwietliæ "has³o niepoprawne").
void task4()
{
	std::string password;
	std::cout << "Podaj has³o\n";
	std::cin >> password;

	if (password == "abc123")
		std::cout << "Has³o poprawne\n";
	else
		std::cout << "Has³o niepoprawne\n";
}

//Napisz program, który wczyta ³añcuch znaków i policzy ile jest ma³ych liter 'a'.
void task5()
{
	std::string textFromUser;
	std::cout << "Podaj ³añcuch znaków\n";
	std::cin >> textFromUser;

	/*
	textFromUser = "abyrcdgt";
	std::cout << "Pierwszy znak to "<< textFromUser[0] << "\n";
	textFromUser[1] = 'x';
	std::cout << textFromUser << "\n";
	std::cout << "Iloœæ znaków "<< textFromUser.length() << "\n";
	*/
	
	int counter = 0;
	for (int i = 0; i < textFromUser.length(); i++)
	{
		if (textFromUser[i] == 'a')
			counter++;
	}

	std::cout << "Ma³ych liter 'a' jest " << counter << "\n";
}

//Napisz program który wygeneruje has³o.
void task6()
{
	std::string passowrd = "";
	int passordLength;

	const int LOWER_RANGE_LENGTH = 4;
	const int UPPER_RANGE_LENGTH = 12;

	srand(time(NULL));
	passordLength = rand() % (UPPER_RANGE_LENGTH - LOWER_RANGE_LENGTH + 1) + LOWER_RANGE_LENGTH;

	for (int i = 0; i < passordLength; i++)
	{
		char character;
		character = rand() % ('z' - 'a' + 1) + 'a';

		passowrd = character + passowrd;
	}

	std::cout << "Wygenerowane has³o " << passowrd << "\n";

	passowrd = "ola";
	std::cout << passowrd[3000];
}

int main()
{
	setlocale(LC_CTYPE, "polish");

	task6();
}
