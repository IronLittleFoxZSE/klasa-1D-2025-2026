// LoopForConsoleApplication.cpp 
#include <iostream>

/*
* Program wyœwietlaj¹cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100

* Napisz program, który wypisze liczby od 10 do 1 w odwrotnej kolejnoœci.

* Napisz program, który obliczy iloczyn liczb od 1 do podanej przez u¿ytkownika.

* Napisz program, który wypisze w kolejnych liniach rosn¹c¹ liczbê cyfr, np.:
1
12
123
1234

*/

//Napisz program, który wyœwietli "Hello world" 
// tyle razy ile chce u¿ytkownik
void task1()
{
	int howManyTimes;
	std::cout << "Podaj ile razy wyœwietliæ\n";
	std::cin >> howManyTimes;

	/*
	int i = 0;
	while (i < howManyTimes)
	{
		std::cout << "Hello world\n";

		i++;
	}
	*/

	for (int i = 0; i < howManyTimes; i++)
	{
		std::cout << "Hello world\n";
	}
}

//Napisz program, który wyœwietli liczby
// parzyste do podanej przez u¿ytkownika liczby
void task2()
{
	int upperRange;
	std::cout << "Podaj górn¹ granicê do wyœwietlenia\n";
	std::cin >> upperRange;

	for (int i = 0; i <= upperRange; i += 2)
	{
		std::cout << i << "\n";
	}
}

//Program obliczaj¹cy sumê liczb od 1 do 100
void task3()
{
	int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		//std::cout << i << "\n";
		sum = sum + i;
	}
	std::cout << "Suma: " << sum << "\n";
}

//Program obliczaj¹cy n!.
/*
5! = 1 * 2 * 3 * 4 * 5
4! = 1 * 2 * 3 * 4
n! = 1 * 2 * 3 * .... * (n-1) * n
*/
void task8()
{
	int number;
	std::cout << "Podaj liczbê\n";
	std::cin >> number;

	long long factorial = 1;

	for (int i = 2; i <= number; i++)
	{
		factorial = factorial * i;
	}

	//factorial = 1;
	/*
	int i = 2;
	while(i <= number)
	{
		factorial = factorial * i;
		i++;
	}
	*/

	std::cout << number << "! = " << factorial << "\n";
}

//Program wyœwietlaj¹cy na ekranie ci¹g Fibonacciego do 20 elementu (ci¹g Fibonacciego to ci¹g gdzie ka¿dy element jest sum¹ dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
void task9()
{
	int f2 = 0;
	int f1 = 1;
	int f;

	std::cout << f2 << ", " << f1 << ", ";

	for (int i = 3; i <= 20; i++)
	{
		f = f1 + f2;
		std::cout << f << ", ";
		f2 = f1;
		f1 = f;
	}
}


int main()
{
	task2();
}