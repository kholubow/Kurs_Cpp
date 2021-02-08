#include <iostream>
#include <string>


using namespace std;


int main()
{
	/*
		string - ci¹g znaków.
		Ka¿dy znak w ci¹gu to char
		string - tablica typu characters
		char to 1 bajt
		D³ugoœæ napisu = iloœæ bajtów zarezerwowanych + 1, na koñcu jest \0
		cout << string - wypisywanie do napotkania \0
	*/
	string napis = "coscosCosCos";
	cout << napis << endl;
	string napisDoPolowy = "coscos\0CosCos";
	cout << napisDoPolowy << endl;	
	
	
	for (int i = 0; i < napis.length(); i++)
	{
		cout << napis[i];
	}
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	cout << "char w string na pozycji nr. 3: " << napis[3] << endl;
	
	
	char tab[] = "inny ciag znakow";
	cout << "char w tab[] na pozycji nr. 5: " << tab[5] << endl;	
	
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	tab[5] = 'k';
	cout << "char w tab[] na pozycji nr. 5: " << tab[5] << endl;		
	cout << tab << endl;
	
	
	
	// Mo¿emy wskazaæ na pocz¹tek tablicy
	// napis to jest adres tej tablicy typu znakowego
	// c_str() - zamienia string na strukturê u¿ywan¹ w jêzyku C
	// const - brak modyfikacji wartoœci
	const char * wsk = napis.c_str();
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Cala tablica napis: " << wsk << endl;
	cout << "Pierwszy element, na to wskazuje wskaznik wsk: " << *wsk << endl;
	cout << "Drugi element, wsk + 1: " << *(wsk + 1) << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	// char to jakiœ numer w tablicy ASCII, czyli prawda
	// tylko 0 jest fa³szem
	// *wsk++ POSTinkrementacja - najpierw sprawdzi, wyœwietli a na koniec doda 1, przesunie wskaŸnik o 1
	while (*wsk) 
		cout << *wsk++;	
		
	cout << endl;
	
	
	
	// WskaŸnik wskazuj¹cy na pocz¹tek dynamicznie alokowanej tablicy rezerwuj¹cej 20 miejsc obok siebie w pamiêci.
	// 20 bajtów.
	// kiedyœ mog³y byæ jakieœ wartoœci, ale zarezerwowaliœmy je.
	// Tworzenie stringa dynamicznie, poza programem.
	// \0 = musimy okreœliæ koniec ci¹gu.
	// new zwraca pierwszy adres w tym ci¹gu miejsc.
	// Oryginalna tab napisek nie mo¿e zmieniaæ adresu, na który wskazuje, dziêki czemu
	// podczas czyszczenia za pomoc¹ delete bêdzie czyszczone od pocz¹tku.
	// W napisek wartoœci mo¿na modyfikowaæ.
	char * const napisek = new char[20];
	char * wskaznik = napisek;
	napisek[0] = 'a';
	napisek[1] = 'b';
	napisek[2] = 'c';
	napisek[3] = '\0';
	cout << napisek;
	cout << endl;
	
	// Po wykonaniu tej pêtli napisek ju¿ nie wskazuje na pierwszy znak.
	while (*wskaznik)
		cout << *wskaznik++;
	
	
	// delete wtedy wyczyœci dopiero od miejsca napisek++, czyli od \0, abc zostawi.
	// NULL = ¿eby wskaŸnik nie wskazywa³ na coœ, co zosta³o ju¿ wyczyszczone.
	delete [] napisek;	
	wskaznik = NULL;
	cout << endl;
	
	char *p = "jakis tam ciag znakow";
	// p[0] = 'k'; - b³¹d
	
	
	
	char p2[] = "jakis tam ciag znakow p2";
	p2[0] = 'g';
	cout << p2;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	// Char - bardziej tak to wygl¹da w C, dopiero potem ogarniêto string
	// W takim przypadku, ¿eby odwo³aæ siê do pojedyñczej literki trzeba skorzystaæ z tablicy
	// 2-wymiarowej
	// napis2 - adres pierwszej pozycji w tablicy typu string
	string napis2[10];
	napis2[0] = "napis2";
	napis2[1] = "napisMod2";
	napis2[2] = "napis3";
	cout << "Caly napis2: "                << *napis2      << endl;
	cout << "1-wszy indeks (napisMod2): "  << napis2[1]    << endl;
	cout << "Do pojedynczej literki (p): " << napis2[1][2] << endl;
	
	
	
	system("pause");
	return 0;
}
