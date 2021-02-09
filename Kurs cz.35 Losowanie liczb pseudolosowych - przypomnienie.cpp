#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void lotto(int, int); // Procedura, void, nie zwraca niczego.
void lotto_zawsze_inne_liczby(int total_balls, int balls_to_allot);
int * lotto_zawsze_inne_liczby_zwr_wsk_na_balls(int total_balls, int balls_to_allot); // Funkcja zwracaj¹ca
// wskaŸnik, typ int, na tablicê balls

const int ILOSC_KULEK = 6;


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
	
	int ile;
	// * balls wskaŸnik przechowuj¹cy adres uzyskany z funkcji zwracaj¹cej adres do 
	// tablicy balls znajduj¹cej siê wewn¹trz samej funkcji.
	cout << "Ile wylosowac liczb? (z " << ILOSC_KULEK << " liczb): "<< endl;
	cin >> ile;
	int * balls = lotto_zawsze_inne_liczby_zwr_wsk_na_balls(ILOSC_KULEK, ile);
	cout << "Zawsze inne liczby zwr wsk na balls: " << endl;
	
	// Za du¿o do wylosowania za ma³o dostêpnych
	if (balls != NULL)
	{
		for (int i = 0; i < ile; i++)
			cout << "ball [" << i + 1 << "] = " << balls[i] << endl;
		
		// WskaŸnik w funkcji g³ównej main() - balls dalej wskazuje na miejsce utworzone przez wskaŸnik
		// w funkcji lotto_zawsze_inne_liczby_zwr_wsk_na_balls, wiêc teraz mo¿na wyczyœciæ t¹ pamiêæ.
		delete [] balls;
	}
	else
		cout << "Podales wieksza ilosc kulek niz jest dozwolona, czyli: " << ILOSC_KULEK << endl;
	
	
	
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
	// Wraz z zakoñczeniem wykonywania siê procedury, * balls przestaje istnieæ, wiêc ju¿ nie mamy
	// ¿adnego odwo³ania do zarezerwowanych miejsc w pamiêci przechowuj¹cych wartoœci pseudolosowe.
	// Pamiêæ dalej jest zarezerwowana pomimo utracenia *balls po koñcu wykonywania siê procedury.
	// Potrzebne 	delete [] balls;
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

	delete [] balls;
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
	// Wraz z zakoñczeniem wykonywania siê procedury, * balls przestaje istnieæ, wiêc ju¿ nie mamy
	// ¿adnego odwo³ania do zarezerwowanych miejsc w pamiêci przechowuj¹cych wartoœci pseudolosowe.
	// Pamiêæ dalej jest zarezerwowana pomimo utracenia *balls po koñcu wykonywania siê procedury.
	// Potrzebne 	delete [] balls;
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
	
	delete [] balls;
}

int * lotto_zawsze_inne_liczby_zwr_wsk_na_balls(int total_balls, int balls_to_allot)
{
	if (total_balls < balls_to_allot)
		return NULL;
		
	srand(time(NULL));
	
	// WskaŸnik wskazuj¹cy na pocz¹tek new int, zarezerwowanego adresu do przechowywania danych 
	// typu int poza naszym programem. *balls = tablica, nazwa tablicy = wskaŸnik, wskazuje
	// na pocz¹tek tablicy, jej 1-wszy element, reszta elementów znajduje siê obok siebie.
	// lotto(49, 6); - 6 zarezerwowanych miejsc typu int obok siebie przez new int (4 bajty).
	// Wraz z zakoñczeniem wykonywania siê funkcji, * balls przestaje istnieæ, wiêc ju¿ nie mamy
	// ¿adnego odwo³ania do zarezerwowanych miejsc w pamiêci przechowuj¹cych wartoœci pseudolosowe.
	// Pamiêæ dalej jest zarezerwowana pomimo utracenia *balls po koñcu wykonywania siê funkcji.
	// Potrzebne 	delete [] balls;
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
			} 
		}
	}
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	// delete [] balls;
	
	return balls;
}
