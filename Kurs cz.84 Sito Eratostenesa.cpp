#include <iostream>

using namespace std;

int main()
{
	/*
		Sito Eratostenesa wyszukuje liczby pierwsze, robi to w sposób o wiele szybszy ni¿ algorytmy
		zastosowane do tej pory, gdy¿ u¿ywa dodawania.
		
		bool tab[1000];
		tablica = wskaŸnik, bo nazwa tablicy jest wskaŸnikiem wskazuj¹cym na adres 
		pierwszego elementu w tablicy, wiêc &tab = &tab[0].
		new bool dla dynamicznej alokacji pamiêci dla tablicy.
		Obok siebie miejsce bêdzie zarezerwowane dla 1000 elementów.
		W przypadku braku mo¿liwoœci znalezienia miejsca, new bool zwróci NULL.
		
		Mo¿na by u¿yæ vectora, ale w tym przypadku trzeba u¿ywaæ iteratora, jako obiektu znaj¹cego
		adresy wszystkich elementów w kontenerze (vectorze), dane nie musz¹ mieæ zarezerwowanego miejca
		obok siebie w jednym bloku w pamiêci z uwagi na specyfikê kontenerów.
		Ale zamiast zwracaæ NULL w przypadku braku mo¿liwoœci rezerwacji miejsca obok siebie dla 1000 
		elementów, vector nie zwróci NULL'a tylko zarezerwuje pamiêæ gdzie indziej dodatkowo.
	*/
	bool tab[1000]; // Tablica typu bool przechowuj¹ca 1000 wartoœci true/false
	unsigned int i, w, ile;
	
	cout << "Do jakiej liczby mam wypisywac liczby pierwsze? ";
	cin >> ile;
	cin.ignore(); // Ignorowanie entera w buforze wprowadzania danych.
	
	
	/*
		W tablicy nadawane s¹ wartoœci TRUE dla elementów, w zale¿noœci, ile
		Np. ile = 500;
		
		Od tab[2] (na 3-ciej pozycji) = TRUE i tak do tab[502]
		
		
		Druga pêtla:
			w = 3
			dopóki w <= ile podano dopóty tab[w] = false;
			
			tab[2] = true
			tab[3] = false i = 2
			w = 5
			w <= ile
			tab[5] = false
			
			w = 7
			tab[7] = false
			
			w = 9
			tab[9] = false
			
			...
			
			
		Oznaczanie liczb pierwszych przy pomocy tablicy typu bool
		false = nie jest liczba pierwsza
		true = jest liczba pierwsza	
		
		
		
		Trzecia pêtla:
			Wypisywanie liczb pierwszych z tak uzyskanej tablicy typu bool
			Je¿eli na tab[i] = true, to wypisanie i
	*/	
	if(ile > 1000)
		cout << "Podales zbyt duzo liczb";
	else
	{
		for (i = 2; i <= ile; i++)
			tab[i] = true;
				
		for (i = 2; i <= ile; i++)
		{
			if ((i != 2) && (i % 2 == 0))
				i++;
				
			w = i + i;
			while(w <= ile)
			{
				tab[w] = false;
				w += i;
			}
		}
	}
	
	
	for (i = 2; i <= ile; i++)
		if (tab[i])
			cout << i << ", ";


	getchar();
	system("PAUSE");
	return 0;
}
