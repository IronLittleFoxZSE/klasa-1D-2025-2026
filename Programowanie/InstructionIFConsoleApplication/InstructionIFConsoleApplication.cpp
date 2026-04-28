#include <iostream>

/*

DRY - don't repeat yourself
KISS - kept it simple stiupid

Operatry warunkowe:
>		- wiêkszy
<		- mniejszy
>=		- wiekszy b¹dŸ równy
<=		- mniejszy b¹dŸ równy
==		- równy
!=		- ró¿ny

Operatory logiczne:
&&	-	AND
||	-	OR
!	-   NOT

a	b		a && b		a || b		!a
F	F		  F			   F		 T
F	T		  F			   T		 T
T	F		  F			   T		 F
T	T	      T			   T		 F

a && b || c && d

*/

/*
Napisz program, który poprosi u¿ytkownika o podanie masy cia³a (w kilogramach) i wzrostu (w metrach).
Na  podstawie tych danych oblicz wskaŸnik BMI (Body Mass Index) i wyœwietl odpowiedni komunikat informuj¹cy o stanie zdrowia.
poni¿ej 16 - wyg³odzenie
16 - 16.99 - wychudzenie
17 - 18.49 - niedowagê
18.5 - 24.99 - wagê prawid³ow¹
25.0 - 29.9 - nadwagê
30.0 - 34.99 - I stopieñ oty³oœci
35.0 - 39.99 - II stopieñ oty³oœci
powy¿ej 40.0 - oty³oœæ skrajn¹

Wzór:

BMI = masa/wysokoœæ^2

*. Napisz program, który poprosi u¿ytkownika o podanie d³ugoœci trzech odcinków i sprawdzi, czy mo¿na zbudowaæ z nich trójk¹t. Wyœwietl odpowiedni komunikat.

*/

//Napisz program, który wyœwietli informacje czy liczba jest dodatnia czy nie.
void task1()
{
	int number;
	std::cout << "Podaj liczbê ca³kowit¹:\n";
	std::cin >> number;

	if (number > 0)
		std::cout << "Podana liczba jest dodatnia\n";

	if (number < 0)
		std::cout << "Podana liczba jest ujemna\n";

	if (number == 0)
		std::cout << "Podana liczba nie jest dodatnia ani ujemna\n";

	std::cout << "Koniec programu\n";
}

//Napisz program, który wyœwietli informacje czy liczba jest parzysta czy nieparzysta.
void task2()
{
	int number;
	std::cout << "Podaj liczbê ca³kowit¹:\n";
	std::cin >> number;

	int reminderOfDivision;
	reminderOfDivision = number % 2;

	if (reminderOfDivision == 0)
		std::cout << "Podana liczba jest parzysta\n";

	if (reminderOfDivision == 0) // == 1 
		std::cout << "Podana liczba jest nieparzysta\n";

	//--------------------------------------------------------
	if (reminderOfDivision == 0)
		std::cout << "Podana liczba jest parzysta\n";
	else
		std::cout << "Podana liczba jest nieparzysta\n";
}

//Napisz program, który wyœwietli informacje czy liczba jest z zakresu <1 ; 10).
void task3()
{
	int number;
	std::cout << "Podaj liczbê ca³kowit¹:\n";
	std::cin >> number;

	//wersja 1
	if (number >= 1)
	{
		if (number < 10)
			std::cout << "Liczba jest w zakresie <1;10)\n";
		else
			std::cout << "Liczba nie jest w zakresie <1;10)\n";
	}
	else
	{
		std::cout << "Liczba nie jest w zakresie <1;10)\n";
	}

	//wersja 2
	if (number >= 1)
		if (number < 10)
			std::cout << "Liczba jest w zakresie <1;10)\n";
		else
			std::cout << "Liczba nie jest w zakresie <1;10)\n";
	else
		std::cout << "Liczba nie jest w zakresie <1;10)\n";

	//wersja 3
	if (number >= 1 && number < 10)
		std::cout << "Liczba jest w zakresie <1;10)\n";
	else
		std::cout << "Liczba nie jest w zakresie <1;10)\n";

	//wersja 4
	if (number < 1 || number >= 10)
		std::cout << "Liczba nie jest w zakresie <1;10)\n";
	else
		std::cout << "Liczba jest w zakresie <1;10)\n";

	//wersja 5
	if (!(number >= 1 && number < 10))
		std::cout << "Liczba nie jest w zakresie <1;10)\n";
	else
		std::cout << "Liczba jest w zakresie <1;10)\n";


}

//Napisz program, który wykona dzielenie dwóch liczb
void task4()
{
	int dividend, divisor;
	std::cout << "Podaj dzielnik:\n";
	std::cin >> dividend;
	std::cout << "Podaj dzieln¹:\n";
	std::cin >> divisor;

	if (divisor != 0)
	{
		int quoitent = dividend / divisor;
		std::cout << "Wynik dzielenia " << quoitent << "\n";
	}
	else
		std::cout << "Dzzielenie przez zero!!!\n";
}

//Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i sprawdzi, czy s¹ one równe. Wyœwietl odpowiedni komunikat.
void task5()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj pierwsz¹ liczbê:\n";
	std::cin >> firstNumber;
	std::cout << "Podaj drug¹ liczbê: ";
	std::cin >> secondNumber;

	if (firstNumber == secondNumber)
		std::cout << "Liczby s¹ równe.\n";
	else
		std::cout << "Liczby nie s¹ równe.\n";
}

//Napisz program, który poprosi u¿ytkownika o podanie wieku i sprawdzi, czy osoba jest pe³noletnia. Wyœwietl odpowiedni komunikat.
void task6()
{
	unsigned short age;
	std::cout << "Podaj wiek:\n";
	std::cin >> age;

	if (age >= 18)
		std::cout << "Jesteœ pe³noletni.\n";
	else
		std::cout << "Jesteœ niepe³noletni.\n";
}

//Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i obliczy jej wartoœæ bezwzglêdn¹. Wyœwietl wynik.
void task7()
{
	int number;
	std::cout << "Podaj liczbê:\n";
	std::cin >> number;

	if (number < 0)
	{
		//number = number * (-1);
		//number *= -1;
		number = -number;
	}

	std::cout << "Twoja liczba jako dodatnia: " << number << "\n";
}

//Napisz program, który poprosi u¿ytkownika o podanie roku i sprawdzi, czy jest to rok przestêpny. Wyœwietl odpowiedni komunikat.
void task8()
{
	short year;
	std::cout << "Podaj rok:\n";
	std::cin >> year;

	if (year % 4 == 0 && year % 100 != 0
		|| year % 400 == 0)
		std::cout << "Rok jest przestêpny\n";
	else
		std::cout << "Rok nie jest przestêpny\n";
}

//Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i sprawdzi,
// czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyœwietl odpowiedni komunikat.
void task9()
{
	int number;
	std::cout << "Podaj liczbê:\n";
	std::cin >> number;

	if (number % 3 == 0 && number % 5 == 0)
		std::cout << "Liczba jest podzielna\n";
}

//Program sprawdzaj¹cy czy podana data jest poprawna
void task10()
{
	int day, month, year;
	std::cout << "Podaj dzieñ\n";
	std::cin >> day;
	std::cout << "Podaj miesi¹c\n";
	std::cin >> month;
	std::cout << "Podaj rok\n";
	std::cin >> year;

	if (day >= 1 && day <= 31
		&& month >= 1 && month <= 12
		&& year != 0
		&& ((month == 4 || month == 6 || month == 9 || month == 11) && day != 31)
		&& month == 2 && (day <= 28
			|| day == 29 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
		)
	{
		std::cout << "Data " << day << "." << month << "." << year << " jest poprawna\n";
	}
	else
	{
		std::cout << "Data nie jest poprawna";
	}
}

//Napisz program, który poprosi u¿ytkownika o podanie liczby od 1 do 7 
// i wyœwietli odpowiadaj¹cy mu dzieñ tygodnia.
void task11()
{
	int dayOfWeek;
	std::cout << "Podaj numer dnia tygodnia (1-7)\n";
	std::cin >> dayOfWeek;

	if (dayOfWeek == 1)
		std::cout << "Poniedzia³ek\n";
	else if (dayOfWeek == 2)
		std::cout << "Wtorek\n";
	else if (dayOfWeek == 3)
		std::cout << "Œroda\n";
	else if (dayOfWeek == 4)
		std::cout << "Czwartek\n";
	else if (dayOfWeek == 5)
		std::cout << "Pi¹tek\n";
	else if (dayOfWeek == 6)
		std::cout << "Sobota\n";
	else if (dayOfWeek == 7 || dayOfWeek == 0)
		std::cout << "Niedziela\n";
	else
		std::cout << "Dzieñ niepoprawny\n";

	switch (dayOfWeek)
	{
	case 1:
		std::cout << "Poniedzia³ek\n";
		break;
	case 2:
		std::cout << "Wtorek\n";
		break;
	case 3:
		std::cout << "Œroda\n";
		break;
	case 4:
		std::cout << "Czwartek\n";
		break;
	case 5:
		std::cout << "Pi¹tek\n";
		break;
	case 6:
		std::cout << "Sobota\n";
		break;
	case 0:
	case 7:
		std::cout << "Niedziela\n";
		break;
	default:
		std::cout << "Dzieñ niepoprawny\n";
	}
}

//Napisz program, który wyœwietli najwiêksz¹ liczbê ze zbioru jednoelementowego.
void task12()
{
	int firstNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> firstNumber;

	int max;

	max = firstNumber;

	std::cout << "Najwiêksza wartoœæ to: " << max << "\n";
}

//Napisz program, który wyœwietli najwiêksz¹ liczbê ze zbioru dwuelementowego.
void task13()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> secondNumber;

	int max;

	if (secondNumber > firstNumber)
		max = secondNumber;
	else
		max = firstNumber;

	std::cout << "Najwiêksza wartoœæ to: " << max << "\n";
}

//Napisz program, który wyœwietli najwiêksz¹ liczbê ze zbioru trójelementowego.
void task14()
{
	int firstNumber, secondNumber, thirdNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> thirdNumber;

	int max;

	if (thirdNumber > secondNumber && thirdNumber > firstNumber)
		max = thirdNumber;
	else if (secondNumber > firstNumber)
		max = secondNumber;
	else
		max = firstNumber;

	std::cout << "Najwiêksza wartoœæ to: " << max << "\n";
}

//Napisz program, który wyœwietli najwiêksz¹ liczbê ze zbioru czteroelementowego.
void task15()
{
	int firstNumber, secondNumber, thirdNumber, fourthNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> thirdNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> fourthNumber;

	int max;

	if (fourthNumber > thirdNumber
		&& fourthNumber > secondNumber
		&& fourthNumber > firstNumber)
		max = fourthNumber;
	else if (thirdNumber > secondNumber 
		&& thirdNumber > firstNumber)
		max = thirdNumber;
	else if (secondNumber > firstNumber)
		max = secondNumber;
	else
		max = firstNumber;

	std::cout << "Najwiêksza wartoœæ to: " << max << "\n";
}

int main()
{
	setlocale(LC_CTYPE, "polish");

	task15();
}
