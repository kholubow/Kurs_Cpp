#include <iostream>
#include <conio.h> // getch, ¿eby nie u¿ywaæ cin.ignore() tak wiele razy.
#include <cstring>

using namespace std;

void Zakanczacz(); // procedura, deklaracja, zakoñczenie pracy programu.
void Haslo(); // Spr. czy dane has³o jest "inteligentne". Wczytanie has³a.

char tn[1]; // tablica T lub N.
char haslo[25]; // Ci¹g znaków, razem string, has³o.
short dl; // D³ugoœæ has³a.
int i, j, k, l; // Liczniki sprawdzaj¹ce, co u¿ytkownik poda³.

int main()
{
	/*
		Sprawdzanie, czy dany wyraz jest inteligentnym has³em.
		Inteligentne has³o:
			- Du¿e, ma³e literki.
			- Cyfry.
			
		Program trwa do momentu zakoñczenia przez u¿ytkownika.
		
		Zakanczacz:
			do tablicy zapisanie t lub n
			powiêkszenie toupper podanej literki, czyli tn[0]
			Je¿eli tn[0] == T, zakoñczenie
			tn[0] == N, wywo³anie g³ównej funkcji main().
			Je¿eli podano zamiast T,t,n,N coœ innego, to ponowne wywo³anie Zakanczacza.
			
			
		Haslo:
			Nieskoñczona pêtla while:
				Przypisanie zer do liczników, s¹ to zmienne globalne, wiêc automatycznie mia³y byæ przypisane zera 
				w przypadku braku ich definicji podczas deklaracji, ale tak na wszelki wypadek.
				U¿ytkownik wiele razy mo¿e wprowadzaæ has³o, wiêc za ka¿dym razem chcemy mieæ liczniki na 0.
				Pobieranie has³a od u¿ytkownika.
				Sprawdzenie jego d³ugoœci do zmiennej dl.
				Pêtla while, dopóki i mniejsze od d³ugoœci has³a:
					Sprawdzanie wszystkich znaków.
					Liczniki powiêkszaj¹ siê, je¿eli s¹ spe³niane warunki inteligentnego has³a.
					Postawione przedzia³y, np. od a do z lub od A do Z lub od 0 do 9 s¹ mo¿liwe dziêki 
					faktowi istnienia tablicy ASCII.
				Wypisywanie w zale¿noœci od wartoœci liczników, czego u¿ytkownik jeszcze nie poda³ w haœle.
	*/
	
	Haslo();
	
	
		
	Zakanczacz();
	getchar();
	system("PAUSE");
	return 0;
}

void Zakanczacz()
{
	cout << endl;
	cout << "Czy chcesz zakonczyc program? (T/N)" << endl;
	cin >> tn;
	
	tn[0] = toupper(tn[0]);
	cout << endl;
	
	if (tn[0] == 'T')
	{
		cout << "Koniec pracy programu" << endl;
		getch();
	} else if (tn[0] == 'N')
	{
		main();
	} else
	{
		Zakanczacz();
	}
}

void Haslo()
{
	while(true)
	{
		j = 0; k = 0; l = 0; i = -1;
		
		cout << "Podaj \"madre\" haslo: " << endl;
		cin >> haslo;
		
		dl = strlen(haslo);
		while(i < dl)
		{
			i++;
			
			if(haslo[i] >= '0' && haslo[i] <= '9')
				j++;
		
				
			if(haslo[i] >= 'a' && haslo[i] <= 'z')
				k++;
				
				
			if(haslo[i] >= 'A' && haslo[i] <= 'Z')
				l++;
				
			if(j != 0 && k != 0 && l != 0)
				break;
		}
		
		if(j != 0 && k != 0 && l != 0)
		{
			cout << endl;
			cout << "Haslo jest inteligentne" << endl;
			break;
		}
		
		if(j == 0)
			cout << "Nie wpisales zadnej cyfry" << endl;
			
		if(k == 0)
			cout << "Nie wpisales zadnej malej literki" << endl;
			
		if(l == 0)
			cout << "Nie wpisales zadnej duzej literki" << endl;
			
		cout << endl;
	}
}
