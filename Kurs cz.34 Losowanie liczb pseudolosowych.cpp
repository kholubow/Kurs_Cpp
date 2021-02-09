#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void lotto(int, int); // Procedura, void, nie zwraca niczego.
void lotto_zawsze_inne_liczby(int total_balls, int balls_to_allot);

int main()
{
	// Okreœlamy ziarno.
	srand(1000);
	srand(RAND_MAX);
	srand(time(NULL));	
	/*
		pseudolosowe - liczba i tak nie jest losowa, okreœlone s¹ regu³y losowoœci
		Regu³a losowania liczby jest okreœlona przy pomocy "ziarna", czyli 
		dodatkowych zmiennych do obliczeñ we wzorze licz¹cym liczbe losow¹ w 
		predefiniowanej funkcji rand().
	*/
	// rand() % 3; - liczby od 0 do 2
	// rand() % 3 + 1; - liczby od 1 do 3
	// rand() % 3 + 10; - liczby od 10 do 12
	// rand() % 49 + 1; - liczby od 1 do 49
	
	int liczba = rand() % 49 + 1;
	cout << "Liczba pseudolosowa: " << endl;
	cout << liczba << endl;
	cout << "RAND_MAX: " << endl;
	cout << RAND_MAX << endl;
	
	
	// Wszystkie kule: 49, do losowania: 6
	// 1 razem, 3 do losowania, return;
	lotto(49, 6);
	
	
	cout << "Zawsze inne liczby: " << endl;
	lotto_zawsze_inne_liczby(6, 6);
	
	
	system("pause");
	return 0;
}

void lotto(int total_balls, int balls_to_allot)
{
	if (total_balls < balls_to_allot)
		return;
		
	srand(time(NULL));
	
	// WskaŸnik wskazuj¹cy na pocz¹tek new int, zarezerwowanego adresu do przechowywania danych 
	// typu int poza naszym programem. *balls = tablica, nazwa tablicy = wskaŸnik, wskazuje
	// na pocz¹tek tablicy, jej 1-wszy element, reszta elementów znajduje siê obok siebie.
	// lotto(49, 6); - 6 zarezerwowanych miejsc typu int obok siebie przez new int (4 bajty).
	int * balls = new int[balls_to_allot];
	
	
	for (int i = 0; i < balls_to_allot; i++)
	{
		// Losowanie od 1 do total_balls, czyli od 1 do 49
		// Tyle, ile do wylosowania przysz³o (6), tyle razy pêtla siê wykona z losowaniem
		// i umieœci w tablicy balls wylosowane liczby sztuk 6.
		balls[i] = rand() % total_balls + 1;
		
		cout << "ball [" << i + 1 << "] = " << balls[i] << endl;
	}
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
}

void lotto_zawsze_inne_liczby(int total_balls, int balls_to_allot)
{
	if (total_balls < balls_to_allot)
		return;
		
	srand(time(NULL));
	
	// WskaŸnik wskazuj¹cy na pocz¹tek new int, zarezerwowanego adresu do przechowywania danych 
	// typu int poza naszym programem. *balls = tablica, nazwa tablicy = wskaŸnik, wskazuje
	// na pocz¹tek tablicy, jej 1-wszy element, reszta elementów znajduje siê obok siebie.
	// lotto(49, 6); - 6 zarezerwowanych miejsc typu int obok siebie przez new int (4 bajty).
	int * balls = new int[balls_to_allot];
	
	
	for (int i = 0; i < balls_to_allot; i++)
	{
		// Losowanie od 1 do total_balls, czyli od 1 do 49
		// Tyle, ile do wylosowania przysz³o (6), tyle razy pêtla siê wykona z losowaniem
		// i umieœci w tablicy balls wylosowane liczby sztuk 6.
		balls[i] = rand() % total_balls + 1;
		
		// Sprawdzanie, czy liczba, która wpad³a do tablicy balls nie jest taka sama, co ju¿
		// któraœ tam siedz¹ca.
		for (int j = 0; j < i + 1; j++)
		{
			// Ju¿ jest taka sama liczba ma miejscu
			// i-- pêtla g³ówna cofnie siê i nadpisze to, co ju¿ jest w tablicy balls
			// break; - brak potrzeby porównywania dalej
			if (balls[i] == balls[j] && i != j)
			{
				i--;
				break;
			} else if (j == i)
				cout << "ball [" << i + 1 << "] = " << balls[i] << endl;
		}
	}
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
}
