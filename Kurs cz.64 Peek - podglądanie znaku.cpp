#include <iostream>

using namespace std;

int main()
{
	/*
		peek - zerkaæ
		Zerkamy na znaki w pliku lub jeden znak, po czym odk³adamy plik, 
		jakby nic siê nie sta³o.
		
		
		Np. do analizy, czy to znak, integer itp i zareagowaæ na to dalej.
		
		
		Tak samo w pliku, zerkanie na znaki bez wyci¹gania ich, 
		reagowanie w zale¿noœci, jakie znaki siê znajduj¹ / liczby.
	*/
	char c;
	
	c = cin.peek(); // Nie pobieramy znaku, tylko zerkamy.
	
	if (c > '0' && c < '9')
	{
		int liczba;
		cin >> liczba;
		
		cout << "Zostala wpisana liczba: " << liczba << endl;
	}
	else
	{
		string txt;
		
		cin >> txt;
		
		cout << "Wpisano tekst o wartosci: " << txt << endl;
	}
	

	system("PAUSE");
	return 0;
}
