#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*
		Sprawdzanie, czy podane imie jest p³ci mêskiej czy ¿eñskiej.
		
		Przed sprawdzeniem p³ci zamiana wszystkich liter na du¿e
		for, do d³ugoœci string, string to te¿ jest "tablica".
		tablica znaków, ka¿dy znak to char, razem tworz¹ string, ci¹g znaków.
		
		Je¿eli ostatnia litera imienia to jest A => p³eæ ¿eñska.
	*/
	string imie;
	
	cout << "Podaj imie: " << endl;
	cin >> imie;
	cin.ignore();
	
	for (int i = 0; i < imie.length(); i++)
	{
		imie[i] = toupper(imie[i]);
	}
	
	if (imie[imie.length()-1] == 'A' && imie != "KUBA")
		cout << "Plec zenska" << endl;
	else
		cout << "Plec meska" << endl;


	getchar();
	system("PAUSE");
	return 0;
}
