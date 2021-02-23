#include <iostream>

using namespace std;

int main()
{
	/*
		putback
		Po³o¿yæ z powrotem na strumieñ.
		
		Do wykorzystania np. gdy w programie ju¿ mamy funkcje get i nie ma jak tego
		zmieniæ z powodu rozbudowania programu / zale¿noœci, a jednoczeœnie 
		zale¿y nam na otrzymaniu wszystkiego ze strumienia.
		
	*/
	char c;
	
	c = cin.get(); // get zabierze 1-wszy znak, a my chcemy go od³o¿yæ na miejsce.
	cin.putback(c); // 1-wszy znak od³o¿ony na strumieñ.
	
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
