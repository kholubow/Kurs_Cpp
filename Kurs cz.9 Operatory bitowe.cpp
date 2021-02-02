#include <iostream>

using namespace std;
main()
{	// Operacje bitowe s¹ najszybsze. Brak koniecznoœci t³umaczenia tego po drodze przez kompilator.
    /*
    		1 albo 0
    	true		false
		
		zapis dwójkowy
				dziesiêtny
				szesnastkowy
				trójkowy
    */
    /*
       & koniunkcja, iloczyn
       | alternatywa, suma
       ~ negacja
       ^ xor, albo
       x >> pozycje w prawo
       x << pozycje w lewo
       przesuwanie zmiennej x
       
    */
    
    cout << "10 iloczyn 2 (2): " << "\n";
	cout << (10 & 2) << endl;
	/*
	1 0 1 0 
	0 0 1 0
	u¿ywamy koniunkcji
	0 0 1 0 czyli 2
	*/
	
	
    cout << "10 alternatywa 2 (10): " << "\n";
	cout << (10 | 2) << endl;
	/*
	1 0 1 0 
	0 0 1 0
	u¿ywamy alternatywy
	1 0 1 0 czyli 10
	*/
	
    cout << "10 XOR, albo 2 (8): " << "\n";
	cout << (10 ^ 2) << endl;
	/*
	1 0 1 0 
	0 0 1 0
	u¿ywamy XOR'a
	1 0 0 0 czyli 8
	*/
	
	
    cout << "negacja 2 (-3): " << "\n";
	cout << (~2) << endl;
	/*
	0 0 1 0
	u¿ywamy negacji
	1 1 0 1 czyli -3 (13) bo pierwszy znak jest 1
	*/
	
	
	
	
    cout << "10 jedna pozycja w lewo (20): " << "\n";
	cout << (10 << 1) << endl;
	/*
	1 0 1 0 
	u¿ywamy x <<
	1 0 1 0 0 czyli 20
	*/
	
	
    cout << "10 jedna pozycja w prawo (5): " << "\n";
	cout << (10 >> 1) << endl;
	/*
	1 0 1 0 
	u¿ywamy x >>
	 0 1 0 1 czyli 5
	*/
	
	
	// Generalnie takie standardowe operacje arytmetyczne, mno¿enie, dzielenie, odejmowanie itp.
	// s¹ bardzo d³ugie dla komputera do wykonania.
	// Jak tylko jest to mo¿liwe powinniœmy stosowaæ operatory bitowe, aby skróciæ czas wykonania.
	system("pause");
}
