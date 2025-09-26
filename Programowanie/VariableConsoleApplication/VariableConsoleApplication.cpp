#include <iostream>

//Napisz program który wczyta liczbê od u¿ytkownika i j¹ wyœwietli na konsoli
void task1()
{
    //wczytanie liczby
        //deklaracja zmiennych          1
        //pobranie liczby
            //informacja co chcemy      2
            //oczekiwanie na liczbê     3
    //wyœwietlenie na konsoli           4

    //1
    int numberFromUser; //number_from_user
    //2
    std::cout << "Podaj liczbê ca³kowit¹:\n";
    //3
    std::cin >> numberFromUser;
    //4
    std::cout << "Poda³eœ " << numberFromUser << "\n";
}

//Program obliczaj¹cy œredni¹ arytmetyczn¹ dwóch liczb.
void task2()
{
    
}


int main()
{
    task2();
}


/*

Zmienna - pewien obszar w pamiêci operacyjnej, w której mo¿na
w danej chwili przechowaæ tylko jedn¹ dan¹.

Instrukcja daklaracji zmiennej:
typ_zmienej nazwaZmiennej;

Typ zmiennej - wielkoœæ obszaru pamiêci, interpretacja ci¹gu bitów

int - 4 bajtowa liczba ca³kowita ze znakiem <-2 147 483 648, 2 147 483 647>

Nazwa zmiennej - nazwa obszaru w pamiêci, identyfikator
Warunki niezbêdne:
* dozwolone znaki:
    - alfabet angielski aA-zZ
    - cyfry arabskie 0-9
    - podkreœlenie (pod³oga) _
* pierwszym znakiem nie mo¿e byæ cyfra
* unikalny w swoim zakresie widocznoœci
* nie mo¿e to byæ s³owo kluczowe (zarezerwowane) danego jêzyka

Warunki programistów:
* nazwa zmiennej powinna oddawaæ charakter przechowywanych danych
* jeœli wiele s³ów to w miejscu spacji podkreœlenie lub zaczynaj¹c od drugiego
  s³owa piszemy je z du¿ej litery
* piszemy po angielsku
*/