#include <iostream>
#include <vector>

using namespace std;

int main()
{
	/*
		Vector:
		
		vector<int>wholeNumbers{1,25,-45,200}
		
		[0]    [1]     [2]     [3]
		 1     25      -45     200
		 
		 ^                      ^
		 |                      |
		 |                      |
	wholeNumbers.front();      wholeNumbers.back();
	
	
		Vector jako tablica z bardziej rozbudowanymi mo¿liwoœciami.
		
		Mo¿emy nagle dodaæ element do ju¿ istniej¹cej tablicy (vectora).
		
		W przypadku tablic, gdy ju¿ skoñczy siê miejsce, nie dodamy nic nowego,
		w vector wystarczy zrobiæ push back, aby dodaæ element na jego koniec.
		
		Mo¿emy dodaæ element w œrodek vectora.
		
		Trzeba zrobiæ include vector.
		
		Czyli w trakcie trwania programu dowolnie modyfikujemy vector bez podawania
		jego wielkoœci.
		
		Z vectorów nie powinniœmy zawsze korzystaæ.
		Jak znamy konkretne rozmiary to lepiej tablice.
		
		
		
		
		
		
		W tym przypadku size vectora = 3 ale capacity = 4
		capacity = pojemnoœæ
		Po dodaniu kolejnego elementu capacity dalej pozostaje = 4
		Generalnie vector na wszelki wypadek rezerwuje trochê wiêcej miejsca ni¿ aktualnie jest 
		mu potrzebne.
		Gdyby musia³ ci¹gle po dodawaniu elementów zwalniaæ pamiêæ, szukaæ nowego miejsca,
		rezerwowaæ je na nowo, to trochê mog³oby, przy wiêkszych iloœciach danych, d³u¿ej
		potrwaæ, dlatego rezerwuje od razu wiêcej na zapas.
		W trakcie dodawania elementów capacity z 4 przechodzi od razu na 8.
		Powiêksza siê dwukrotnie.
		
		
		
		Jako ¿e vector zachowuje siê jak tablica, mo¿emy podmieniaæ jego wartoœci.
		
		
		
		
		
			wholeNumbers.insert(2, 4500) - wbijanie siê do jakiegoœ miejsca.
			wholeNumbers.erase(3) - usuwanie z danego miejsca
			ale jako parametry te dwie metody przyjmuj¹ iterator.	
	*/
	
	vector<int> wholeNumbers; // <> <-- to znaczy, ¿e to jest szablon klas.
	
	// wholeNumbers.push_back("sdsdd"); // B³¹d
	wholeNumbers.push_back(20); // Dodanie na koniec vectora
	wholeNumbers.push_back(45);
	
	cout << "wholeNumbers[0]: " << endl;
	cout << wholeNumbers[0]     << endl;
	cout << "wholeNumbers[1]: " << endl;
	cout << wholeNumbers[1]     << endl;
	
	
	wholeNumbers.push_back(200);
	cout << "wholeNumbers[2]: " << endl;
	cout << wholeNumbers[2]     << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "wholeNumbers.back(): " << endl;
	cout << wholeNumbers.back()     << endl;	
	cout << "wholeNumbers.front(): "<< endl;
	cout << wholeNumbers.front()    << endl;	
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "wholeNumbers.size(): "    << endl;
	cout << wholeNumbers.size()        << endl;	
	cout << "wholeNumbers.capacity(): "<< endl;
	cout << wholeNumbers.capacity()    << endl;	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;	
	
		
	wholeNumbers.push_back(500);
	cout << "[Dodano 1 element na koniec] wholeNumbers.capacity(): "<< endl;
	cout << wholeNumbers.capacity()    << endl;		
	wholeNumbers.push_back(505);
	cout << "[Dodano 1 element na koniec] wholeNumbers.capacity(): "<< endl;
	cout << wholeNumbers.capacity()    << endl;	
	wholeNumbers.push_back(600);
	cout << "[Dodano 1 element na koniec] wholeNumbers.capacity(): "<< endl;
	cout << wholeNumbers.capacity()    << endl;	
	cout << "wholeNumbers.size(): "    << endl;
	cout << wholeNumbers.size()        << endl;		
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
	
	
	
	
	cout << "Modyfikacja 1-wszego elementu: " << endl;
	cout << "wholeNumbers[0] = 999; "         << endl;
	wholeNumbers[0] = 999;
	cout << "wholeNumbers[0]: " << endl;
	cout << wholeNumbers[0]     << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Inny sposob odwolywania sie do elementow:" << endl;
	cout << "wholeNumbers.at(0)   "         << endl;
	cout << wholeNumbers.at(0)     << endl;	
	
	
	
	
	//wholeNumbers.insert(2, 4500)
	//wholeNumbers.erase(3)
	
	system("PAUSE");
	return 0;
}
