// LoopDoWhileConsoleApplication.cpp 

#include <iostream>

//Napisz program, który ma pobraæ od u¿ytkownika liczbê dodatni¹. 
//Zabezpiecz program przed pobieraniem liczb ujemnych.
void task1()
{
	int number;
	/*
	std::cout << "Podaj dodatni¹ liczbê:\n";
	std::cin >> number;

	if (number < 0)
	{
		std::cout << "Podaj dodatni¹ liczbê:\n";
		std::cin >> number;
		if (number < 0)
		{
			std::cout << "Podaj dodatni¹ liczbê:\n";
			std::cin >> number;
			if (number < 0)
			{
				std::cout << "Podaj dodatni¹ liczbê:\n";
				std::cin >> number;
				if (number < 0)
				{
					//...
				}
			}
		}
	}
	*/

	do
	{
		std::cout << "Podaj dodatni¹ liczbê:\n";
		std::cin >> number;
	} while (number < 0);

	std::cout << "Poda³eœ dodatni¹ liczbê: " << number << "\n";
}

//Napisz program, który wylosuje liczbê 
//a nastêpnie uzytkownik bêdzie musia³ j¹ zgadn¹æ.
void task2()
{
	int randomNumber;
	const int LOWER_RANGE = 1;
	const int UPPER_RANGE = 100;

	srand(time(NULL));

	std::cout << "Rand() zwraca wartoœci z przedzi¹³u <0;"<< RAND_MAX << ">\n";

	//LOWER_RANGE = 5; //b³êna instrukcja
	//<9; 50>
	randomNumber = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;

	//std::cout << "Wylosowana liczba: " << randomNumber << "\n";

	int number;

	/*
	std::cout << "Podaj liczbê:\n";
	std::cin >> number;
	if (number != randomNumber)
	{
		std::cout << "Podaj liczbê:\n";
		std::cin >> number;
		if (number != randomNumber)
		{
			std::cout << "Podaj liczbê:\n";
			std::cin >> number;
			if (number != randomNumber)
			{
				//...
			}
		}
	}
	*/

	do
	{
		std::cout << "Podaj liczbê:\n";
		std::cin >> number;
		if (number < randomNumber)
			std::cout << "Poda³eœ za ma³¹ liczbê.\n";
		if (number > randomNumber)
			std::cout << "Poda³eœ za du¿¹ liczbê\n";
	} while (number != randomNumber);

	std::cout << "Gratulacje!!!\nZgad³eœ liczbê\n";
}


int main()
{
	task2();
}
