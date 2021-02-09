#include <iostream>
#include <string>

using namespace std;

// PATTERN = wzór
const string PATTERN = "¹¥œŒŸ³£ó¿¯ñÑêÊæÆÓ";
// Funkcja tworz¹ca polskie znaki Windowsowe
// Funkcja zwraca tablicê, czyli wskaŸnik
int * zle_pl(string);


int polskie_znaki[] = {-91, -92, -104, -105, -85, -115, -120, -99, -94, -66, -67, -28, -29, -87, -88, -122, -113, -32}; //¹¥œŒŸ³£ó¿¯ñÑêÊæÆÓ - alternatywa   
// Tablica przyjmuje pocz¹tek, zwrócony wskaŸnik z funkcji,
// tablica = wskaŸnik (jej nazwa przede wszystkim).
int * zle_polskie_znaki = zle_pl(PATTERN);


// Funkcja zwracaj¹ca string, dokonuj¹ca przekodowania kodowania ASCII polskich
// znaków do wyœwietlenia. Zwraca typ danych string.
string pl(string);

int main()
{
	cout << "to jest æwierk" << endl;
	cout << "to jest æwierk ¹œêæó³³ê¹œæ" << endl;
	// Inne kodowanie, ³ ma inn¹ wartoœæ ni¿ w konsoli, œrodowisku windows.
	// W konsoli ³ jest pod inn¹ liczb¹.
	// ASCII
	// S¹ w innych miejscach w tablicy ASCII
	
	char zn;
	cout << "Podaj ¹: " << endl;
	cin >> zn;
	cout << static_cast<int>('¹') << endl;
	cout << "Wypisany znak to: " << static_cast<int>(zn) << endl;
	// ¹ = -91 w konsoli Windows
	// ¹ = -71 podczas kodowania
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << pl("¥Œ¿Ÿ¿œ Polskie znaki ÊŒÆÑÓ¯") << endl;
	
	
	system("pause");
	return 0;
}

int * zle_pl(string pattern)
{
	// Tworzenie tablicy dynamicznej.
	// new int - rezerwacja pamiêci poza programem z jednoczesnym wskazaniem na pocz¹tek szeregu.
	// czyli to samo co deklaracja tablicy, nazwa tablicy = adres = wskaŸnik do 1-wszego jej
	// elementu.
	// Rezerwacja bêdzie nadal nawet po skoñczeniu pracy funkcji, pomimo utracenia wtedy
	// *tab
	// Rzutowanie polskich znaków na Windowsowe, do dynamicznej tablicy.
	// Bêdziemy póŸniej w trakcie trwania programu dalej korzystaæ z polskich znaków, wiêc
	// niech rezerwacja z jej wartoœciami dalej bêdzie.
	int *tab = new int[pattern.length()];
	
	for (int i = 0; i < pattern.length(); i++)
		tab[i] = static_cast<int>(pattern[i]);
	
	return tab;
	// return &tab[0]; - pocz¹tek = tab
}

string pl(string napis)
{
	// Trafia tutaj napis,
	// sprawdzamy ka¿dy znak z tego ci¹gu znaków typu string.
	// Je¿eli analizowany znak nale¿y do zbioru polskich znaków okreœlonych przez
	// zmienn¹ globaln¹ PATTERN, to 
	for (int i = 0; i < napis.length(); i++)
		for (int j = 0; j < PATTERN.length(); j++)
		{
			// zle_polskie_znaki = wskaŸnik na zle_pl
			// czyli w, nie, t, nie ale np. ¹ ju¿ tak
			if (napis[i] == zle_polskie_znaki[j])
			{
				// Zamiana ASCII kodowanego tutaj na Windowsowy do wyœwietlenia.
				// break; i sprawdza nastêpny znak.
				napis[i] = polskie_znaki[j];
				break;
			}
		}
	
	
	return napis;
}
