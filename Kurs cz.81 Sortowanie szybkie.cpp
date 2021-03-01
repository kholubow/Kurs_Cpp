#include <iostream>

using namespace std;

void PokazStan(); // Deklaracja procedury
void Sort(int, int);


const int ile = 5;
int tab[ile] = {5, 60, 10, 40, 3}; // Globalna definicja tablicy, piwot tutaj = 10


int main()
{
	/*
		Sortowanie szybkie - szybko sortuje.
		
		1. Dzielenie tablicy na dwie czêœci. Po œrodku wybieramy piwot.
		2. Piwot podmieniamy z ostatni¹ cyfr¹ tablicy ostatniej.
		3. Wszystkie liczby porównujemy z piwotem.
		4. Liczby nie wiêksze od piwotu l¹duj¹ po lewej stronie.
		5. Liczby wiêksze od piwotu l¹duj¹ po prawej stronie.
		6. Algorytm jest wykonywany rekurencyjnie, od lewej strony do j-1, -1, bo nie mo¿emy
		braæ pod uwagê miejsca, gdzie jest piwot.
		7. Od j+1 do prawej strony, rekurencyjnie jest to wszystko wykonywane.
		
		Rekurencyjnie - czyli funkcja jest wywo³ywana w funkcji.
		
		
	*/
	cout << "Tablica po wczytaniu wszystkiego: " << endl;
	PokazStan();
	
	/*
			Sortowanie w procedurze Sort:
				1. Przyjmuje lewy index, czyli = 0, prawy = 4.
				2. i = 2.
				3. piwot = tab[i], czyli obliczony œrodek tablicy. (0 + 4) / 2
				4. tab[i] = tab[prawy], czyli na miejsce œrodka tablicy wskakuje jej skrajnie 
				prawy element.
				5. Pêtla for, od 0 do 4 (prawy).
					- Do póki spotykane elementy tablicy w pêtli s¹ mniejsze od piwota, to
					t - temp - zmienna tymczasowa, przyjmuje wartoœæ i tablicy.
					tab[i] element zamieniany na tab[j] (na pocz¹tku tab[0]).
					na miejscu tab[j] wkracza t, czyli tab[i]
					j++, w nastêpnym wypadku u¿ycia tej instrukcji warunkowej if, bêdzie
					brany pod uwagê 
							Piwot = 10;
							// 1.
							j = 0
							// tab[i]  tab[1]  tab[2]  tab[3]  tab[4]
							//   5       60      3      40      3	
							t = 5
							tab[i] = tab[0] = 5
							tab[j] = tab[0] = 5
							j++;
							
							// 2.
							j = 1
							// tab[i]  tab[1]  tab[2]  tab[3]  tab[4]
							//   5       3      60      40      3	
							t = tab[2] = 3
							tab[i] = tab[j] = 60
							tab[j] = t = 3
							j++;	
							
							
							// 3.
							j = 2
							// tab[i]  tab[1]  tab[2]  tab[3]  tab[4]
							//   5       3      3      40      60	
							t = tab[i] = tab[4] = 3
							tab[i] = tab[j] = 60
							tab[j] = t = 3
							j++;						
							
							Elementy równe, wiêksze od piwotu nie s¹ tutaj brane pod uwagê.
							j = 3
				6. Skrajnie prawy element staje siê tab[j], czyli tutaj:
							tab[4] = tab[3] = 40
							tab[4] = 40
	
							// tab[0]  tab[1]  tab[2]  tab[3]  tab[4]
							//   5       3      3      40      60								
							
							// tab[0]  tab[1]  tab[2]  tab[3]  tab[4]
							//   5       3      3      10      40
							tab[j] = piwot = 10
							
				7. Instrukcje warunkowe if:
				
					if(lewy < j - 1)         0 < 2
						Sort(lewy, j - 1)
						
					Sort(0, 2)
					
						    // tab[0]  tab[1]  tab[2]  tab[3]  tab[4]
							//   5       3      3      10      40
					
						
						
					if(j + 1 < prawy)        4 < 4
						Sort(j+1, prawy);
						
					W kroku nr. 7 wystêpuje rekurencja - wywo³ywanie funkcji (procedury) przez
					sam¹ siebie.
						
						
			Tutaj procedury mia³y dostêp do tablicy znajduj¹cej siê poza nimi bez u¿ywania
			referencji/wskaŸników z uwagi na fakt, ¿e zosta³a ona zdefiniowana jako globalna.
			
			
			
			Nawet je¿eli w trakcie sortowania ju¿ wyjdzie posortowana tablica to program i tak
			wykonuje siê dalej a¿ do ostatniej rekurencji.
	*/
	Sort (0, ile - 1); // nie 5 tylko 4 index max, wiêc musi byæ -1
	

	
	
	cout << "Tablica po szybkim sortowaniu: " << endl;
	PokazStan();
	

	getchar();
	system("PAUSE");
	return 0;
}

void PokazStan() // Definicja procedury (bo nic nie zwraca, nie ma return)
{
	cout << "Nasza tablica wyglada nastepujaco: " << endl;
	for (int i = 0; i < ile; i++)
	{
		cout << (i+1) << ". = " << tab[i] << endl;
	}
}

void Sort(int lewy, int prawy)
{
	int i, j, t, piwot;
	
	i = (lewy + prawy) / 2;
	
	piwot = tab[i];
	tab[i] = tab[prawy];
							// 1.
							// tab[0]  tab[1]  tab[2]  tab[3]  tab[4]
							//   5       60      10      40      3
							
							
							// 2.
							// tab[0]  tab[1]  tab[2]  tab[3]  tab[4]
							//   5       60      3      40      3
							
	for (j = i = lewy; i < prawy; i++)
	{
		if(tab[i] < piwot)
		{
			t = tab[i];
			tab[i] = tab[j];
			tab[j] = t;
			j++;
		}
	}
	
	
	tab[prawy] = tab[j];
	tab[j] = piwot;
	
	
	
	if(lewy < j - 1)
		Sort(lewy, j - 1);
		
		
		
	if(j + 1 < prawy)
		Sort(j+1, prawy);
							
}
