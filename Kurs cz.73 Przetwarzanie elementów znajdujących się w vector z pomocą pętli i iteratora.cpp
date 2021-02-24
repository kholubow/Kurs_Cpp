#include <iostream>
#include <vector>

using namespace std;

int main()
{
	/*
		ITERATOR - obiekt wskazuj¹cy KONKRETN¥ pozycjê w KONTENERZE
		
		Tworzenie iteratora:
		typ_kontenera::iterator nazwa_iteratora
		
		:: Operator zasiêgu, np. do zasiêgniêcia konkretnej metody w innej klasie itd.
		
		
		Iteracja - ka¿de z przejœæ w pêtli.
		W takiej pêtli iteratorem nazywamy zmienn¹ i.
		Iterator przechowuje pozycje przejœcia pêtli.
		
		
		
		W przypadku STL to nie jest ju¿ zwyk³a zmienna, to jest obiekt.
		Obiekt wskazuj¹cy na konkretn¹ pozycjê w kontenerze elementów.
		Nie wszystkie dane w takim kontenerze musz¹ znajdowaæ siê jedna po drugiej w pamiêci.
		Dane zwyk³ej tablicy (lub przy pomocy np. new int - dynamiczne alokowanie pamiêci dla tablicy)
		s¹ pouk³adane jedna po drugiej w pamiêci. Dlatego wskaŸnikami mogliœmy skakaæ po danych w tablicy.
		
		W przypadku kontenerów mo¿e tak byæ, ale nie musi.
		Iterator jest obiektem.
		
		
		
		
		Metoda end() zwraca ostatni element + 1, czyli idealna metoda do pêtli.
		
		Kontener vector.
	*/
	
	vector<int> wholeNumbers {20, 10, 4, -3, 25};
	
	
	vector<int>::iterator it = wholeNumbers.begin(); 
	cout << "Wypisanie elementow z vectora: " << endl;
	
	/*
	while(it != wholeNumbers.end())
	{
		cout << *it << endl;
		it++;
	}
	*/
 
	for (it; it != wholeNumbers.end(); it++)
	{
		cout << *it << endl;
	}	
			

	system("PAUSE");
	return 0;
}
