#include <iostream>

using namespace std;
main()
{
	/*
	Je�eli prawda, to co� wykona, je�eli fa�szem, to nic nie zrobi.
	Warunek: 4 < 7
	
		Je�eli (warunek)
		{
			To wykonaj tutaj ta linijke	/ instrukcje	
		} w innym wypadku je�eli (warunek) {
			To wykonaj tutaj
		} w ca�kowicie innym wypadku, je�li nie zosta�y spe�nione powy�sze warunki, to wykonaj 
		{
			ta tutaj instrukcje
	    }
	*/
	
	int a = 5, b = 7, c = 20, d = 5, e, f;
	
	if (a < b)
	{
	    cout << "a < b (tak) " << "\n";		
	}
	if (c < d)
	{
	    cout << "c < d (tak) " << "\n";		
	}
    cout << "Podaj liczbe e do porownania: " << "\n";
	cin >> e;
	cout << "Podaj liczbe f do porownania: " << "\n";
	cin >> f;
	if (e < f)
	{
	    cout << "Liczba e jest mniejsza od f" << "\n";		
	    cout << "i dalsze instrukcje, wywolania itp <" << "\n";
	} else if (e == f)
	{
		cout << "Liczba e jest taka sama jak f" << "\n";
		cout << "i dalsze instrukcje, wywolania itp =" << "\n";
	} else if (e > f)
	{
		cout << "Liczba e jest wieksza od f" << "\n";
		cout << "i dalsze instrukcje, wywolania itp >" << "\n";
	} else
	{
		cout << "blad" << endl;
		cout << "i dalsze instrukcje, wywo�ania itp b" << "\n";
	}
	
	
	
	// if dzia�a tylko jedn� linijk� instrukcji ni�ej.
	if (7 > 4)
		cout << "cos" << endl;


	
	// wiele warunk�w w if
	if ((7 < 4) || (0 < 10))
		cout << "7 < 4 ||" << endl;
	
	
	// z�o�one warunki w if
	if (((7 < 4) || (0 < 10)) && (10 == 10))
		cout << "10 == 10 &&" << endl;
		
		
	if (((7 < 4) || (0 < 10)) && (9 == 10))
		cout << "10 == 10 && 9" << endl;
		
		
	
	// wszystkie warto�ci r�ne od 0 s� prawd�	
	if (1234.124)
		cout << "1234.124" << endl;	
			
			
	
				
	system("pause");
}
