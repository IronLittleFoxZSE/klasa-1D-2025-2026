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

//Napisz program wyœwietlaj¹cy liczby ca³kowite z przedzia³u <1,x>.
//Gdzie x podaje u¿ytkownik.
void task3()
{
	//std::cout << "1, 2, 3, 4, 5, 6\n";
	unsigned long long upperRange;
	std::cout << "Podaj górny zakres wiêkszy b¹dŸ równy 1\n";
	std::cin >> upperRange;
/*
	std::cout << "1, ";
	if (upperRange > 1)
	{
		std::cout << "2, ";
		if (upperRange > 2)
		{
			std::cout << "3, ";
			if (upperRange > 3)
			{
				std::cout << "4, ";
				//...
			}
		}
	}
	std::cout << "\n";
	*/

	unsigned long long currentNumber = 0;
	do
	{
		//currentNumber = currentNumber + 1;
		//currentNumber += 1;
		//currentNumber++;
		++currentNumber;
		std::cout << currentNumber <<", ";
	} while (upperRange > currentNumber);

	std::cout << "\n";
}

//Napisz program, który policzy sumê cyfr 
// podanej przez u¿ytkownika liczby.
void task4()
{
	int number;
	std::cout << "Podaj liczbê\n";
	std::cin >> number;

	int sum = 0;

	do
	{
		int digit = number % 10;
		sum = sum + digit;
		number = number / 10;
	} while (number != 0);

	std::cout << "Suma cyfr: " << sum << "\n";


}

int main()
{
	task4();
}
