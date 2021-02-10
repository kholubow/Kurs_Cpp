#include "biblioteka.h"
#include "biblioteka.h"
#include "biblioteka.h"
#include "biblioteka.h"
#include "biblioteka.h"


#define PI 3.14


int main(int argc, char** argv) 
{
	/*
		Projekt wieloplikowy
		Gdyby trzymaæ ca³y kod Ÿród³owy to ka¿da zmiana wymaga³a by przekompilowania np. 1000 linijek kodu.
		#include <iostream>
		# oznacza, ¿e zaraz bêdzie instrukcja preprocesora. 
		Preprocesor wywo³ywany jest najpierw i wykonuje siê przed sam¹ kompilacj¹.
		#define PI 3.14 Najpierw przed kompilacj¹ podmieniæ wszêdzie PI na 3.14
		Czyli to s¹ instrukcje preprocesora.
		#include <iostream> - "wklejenie" wszystkiego, co znajduje siê w pliku iostream.
		W iostream tak¿e znajduj¹ siê kolejne #include, czyli dalej, umieszczanie kodu z innych plików.
		Ostatecznie tutaj l¹duje du¿o kodu z wielu plików przy pomocy tylko jednego #include.
		Ale tych rzeczy importowanych przy pomocy #include ju¿ nie trzeba rekompilowaæ a tego mo¿e
		byæ naprawdê du¿o.
		
		
		Mo¿emy tworzyæ w³asne pliki i je #include'owaæ
		biblioteka.h nazywa siê nag³ówkiem, header, bo jest na górze pliku #include
		#include <iostream>
		U¿ywamy < i >, poniewa¿ kompilator ma ju¿ ustawione, sk¹d pobieraæ iostream
		#include "biblioteka.h" 
		" i ", oznacza, ¿e plik jest w danym katalogu, w którym teraz jest, kompilator, czyli tutaj
		folder projektu.
		
		
		W jednej bibliotece.h mo¿na np. z includowaæ wszystkie rzeczy, jakie bêdziemy chcieli importowaæ
		i wtedy zachowaæ porz¹dek w g³ównym pliku projektu.
		
		
		#include <iostream>
		#include <iostream>
		#include <iostream>
		#include <iostream>
		#include <iostream> --- brak b³êdu
		#include "biblioteka.h" 
		#include "biblioteka.h"  -- b³¹d
		#include "biblioteka.h" 
		#include "biblioteka.h" 
		
		
		Poniewa¿ w iostream jest pewne "zabezpieczenie":
			#ifndef _GLIBCXX_IOSTREAM - je¿eli nie zdefiniowano "{",
			Je¿eli ju¿ zosta³o zdefiniowane, to wszystko zostanie pominiête pomiêdzy
			ifndef a endif
			#define _GLIBCXX_IOSTREAM 1 - zdefiniuj
			
			...
			
			zakoñczenie if'a
			#endif /* _GLIBCXX_IOSTREAM */ //"}"
	/*
			Swój przyk³ad w biblioteka.h
			To co przed ifndef i po endif siê wykona
			Teraz mo¿na includowaæ nawet wiele bibliotek.h pod rz¹d i wszystko dzia³a
			poprawnie.
			
			Gdy w projekcie mamy wiele plików to wypada uzywaæ opcji "Przebuduj wszystko".
			Wtedy wszystkie pliki zostan¹ przekompilowane na nowo
			Opcja "Kompiluj i uruchom" skupia siê g³ównie na aktualnie otwartym pliku
			
			W nag³ówku biblioteka powinny znajdowaæ siê same deklaracje.	
	*/
	/*
			Funkcje/procedury maj¹ dodane automatycznie extern void, dlatego z biblioteka.h
			dzia³a procedura/funkcja w innym pliku.
			Przy zmiennych:
				extern int a;
			Nie mo¿na od razu nadaæ wartoœci.
			To jest tylko informacja, ¿e gdzieœ bêdzie istnia³o takie a
			Nie rezerwuje 4 bajtów pamiêci.
			Wiêc nie mo¿na czegoœ przypisaæ.
			extern int a; - to jest tylko deklaracja etykiety, wiêc mo¿na tak napisaæ wiele razy
			pod rz¹d.
	*/
	/*
			extern int b mówi tylko, ¿e ta zmienna zosta³a zdefiniowana gdzieœ w innym pliku w projekcie.
			Plik nag³ówkowy biblioteka.h - same deklaracje najlepiej
			Plik biblioteka.cpp - definicje
			import wszystkiego do pliku g³ównego projektu main.cpp
			i praca wtedy tylko z tym plikiem.
	*/
	cout << "#define PI 3.14: " << endl;
	cout << "PI: " << PI << endl;
	
	cout << "Zmienna a z biblioteka.h: " << endl;
	cout << "a: " << a << endl;
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Procedura wypisz z biblioteka.h: " << endl;
	cout << "wypisz(): " << endl;
	wypisz();
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Procedura wypisz2 z biblioteka.h: " << endl;
	cout << "wypisz2(): " << endl;
	wypisz2();
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Zmienna b zdefiniowana w biblioteka.cpp i wyexternowana przez biblioteka.h: " << endl;
	cout << "b: " << b << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Procedura wypisz3 z biblioteka.h (definicja w pliku biblioteka.cpp): " << endl;
	cout << "wypisz3(): " << endl;
	wypisz3();
		
	
	system("PAUSE");
	return 0;
}

void wypisz2() // Definicja procedury z biblioteka.h
{
	cout << "cosik2" << endl;
}
