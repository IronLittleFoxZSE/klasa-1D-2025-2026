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


int main()
{
	task2();
}