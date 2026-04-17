// ArrayConsoleApplication.cpp 

#include <iostream>

/*
DRY - don't repeat yourself - nie powtarzaj siê
KISS - Keept it simple, stupid - trzymaj prostotê g³upcze
YAGNI - you aren't gonna need it - nie potrzebujesz tego
*/

//Napisz program, który wczyta np. 5 liczb 
//a nastêpnie wyœwietli je w odwrotnej kolejnoœci.
void task1()
{
	/*
	int number0, number1, number2, number3, number4 ;

	std::cout << "Podaj liczbê:\n";
	std::cin >> number0;
	std::cout << "Podaj liczbê:\n";
	std::cin >> number1;
	std::cout << "Podaj liczbê:\n";
	std::cin >> number2;
	std::cout << "Podaj liczbê:\n";
	std::cin >> number3;
	std::cout << "Podaj liczbê:\n";
	std::cin >> number4;

	std::cout << number4 << "\n";
	std::cout << number3 << "\n";
	std::cout << number2 << "\n";
	std::cout << number1 << "\n";
	std::cout << number0 << "\n";
	*/

	/*
	int x = 0;

	std::cout << "Podaj liczbê:\n";
	std::cin >> "number" + x;
	x++;

	std::cout << "Podaj liczbê:\n";
	std::cin >> "number" + x;
	x++;

	std::cout << "Podaj liczbê:\n";
	std::cin >> "number" + x;
	x++;

	std::cout << "Podaj liczbê:\n";
	std::cin >> "number" + x;
	x++;

	std::cout << "Podaj liczbê:\n";
	std::cin >> "number" + x;
	x++;
	*/

	/*
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Podaj liczbê:\n";
		std::cin >> "number" + i;
	}
	*/

	//int number0, number1, number2, number3, number4;
	const unsigned short ARRAY_SIZE = 5;
	int numbers[ARRAY_SIZE];
	//numbers[2] = 10;

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		std::cout << "Podaj liczbê:\n";
		std::cin >> numbers[i];
	}

	for (int i = ARRAY_SIZE - 1; i >= 0; i--)
		std::cout << numbers[i] << "\n";

}

//Napisz program, który uzupe³ni tablicê liczbami losowymi a nastêpnie znajdzie minimum oraz maksimum.
void task2()
{
	const short LOWER_RANGE = -40;
	const short UPPER_RANGE = -10;

	const unsigned short ARRAY_SIZE = 100;
	int numbers[ARRAY_SIZE];

	srand(time(0));

	std::cout << "wylosowane liczby:\n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
		std::cout << numbers[i] << ", ";
	}

	int max = numbers[0];

	for (int i = 1; i < ARRAY_SIZE; i++)
		if (numbers[i] > max)
			max = numbers[i];

	std::cout << "Max to: " << max << "\n";

	int min = numbers[0];

	for (int i = 1; i < ARRAY_SIZE; i++)
		if (numbers[i] < min)
			min = numbers[i];

	std::cout << "Min to: " << min << "\n";
}

//Napisz program obliczaj¹cy œredni¹ arytmetyczn¹ elementów w tablicy liczb ca³kowitych.
void task3()
{
	// <LOWER_RANGE; UPPER_RANGE> przy za³o¿eniu, ¿e LOWER_RANGE <= UPPER_RANGE
	const unsigned short LOWER_RANGE = 5;
	const unsigned short UPPER_RANGE = 7;

	const unsigned short ARRAY_SIZE = 3;
	int numbers[ARRAY_SIZE];

	srand(time(0));

	std::cout << "wylosowane liczby:\n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
		std::cout << numbers[i] << ", ";
	}
	std::cout << "\n";
	//----------------------------------------------------------------------------

	int sum = numbers[0];
	for (int i = 1; i < ARRAY_SIZE; i++)
		sum = sum + numbers[i];

	double avg = sum * 1.0 / ARRAY_SIZE;

	std::cout << "Œrednia wynosi: " << avg << "\n";
}

int main()
{
	task3();
}

