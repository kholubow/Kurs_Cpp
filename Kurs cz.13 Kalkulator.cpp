#include <iostream>
#include <string>

using namespace std;

main()
{
	// u¿ycie goto w programie c++, nie robi siê tego tak generalnie.
	// goto etykieta;
	cout << "----------------------" << endl;
	cout << "| Kalkulator v. 1.0  |" << endl;
	cout << "| by Imie Nazwisko   |" << endl;
	cout << "| All rights reserved|" << endl;
	cout << "----------------------" << endl;
	
	double zm1, zm2;
	char znak;
	
	poczatek:
    cout << "Podaj liczbe zm1: " << "\n";
	cin  >> zm1;
    cout << "Podaj liczbe zm2: " << "\n";
	cin  >> zm2;
	
	cout << "Co chcesz zrobic z tymi liczbami?" << "\n";
	cout << "+ dodac"     << endl;
	cout << "- odjac"     << endl;
	cout << "* pomnozyc"  << endl;
	cout << "/ podzielic" << endl;
	cin  >> znak;
	
	switch (znak)
	{
		case '+':
			cout << zm1 << " + " << zm2 << " = " << (zm1 + zm2) << endl;
			break;
		case '-':
			cout << zm1 << " - " << zm2 << " = " << (zm1 - zm2) << endl;
			break;
		case '*':
			cout << zm1 << " * " << zm2 << " = " << (zm1 * zm2) << endl;
			break;
		case '/':
			if (zm2 != 0)
					cout << zm1 << " / " << zm2 << " = " << (zm1 / zm2) << endl;
			else
					cout << "Nie dziel przez 0" << endl;
			break;	
	}
	
	
	cout << "Wykonanie wszystkich pozostalych dzialan: " << "\n";
	switch (znak)
	{
		case '+':
			cout << zm1 << " + " << zm2 << " = " << (zm1 + zm2) << endl;
		case '-':
			cout << zm1 << " - " << zm2 << " = " << (zm1 - zm2) << endl;
		case '*':
			cout << zm1 << " * " << zm2 << " = " << (zm1 * zm2) << endl;
		case '/':
			if (zm2 != 0)
					cout << zm1 << " / " << zm2 << " = " << (zm1 / zm2) << endl;
			else
					cout << "Nie dziel przez 0" << endl;	
	}
	
	string znak2;
	
    cout << "Czy chcesz wprowadzic zmienne od nowa? t/T lub n/N: " << "\n";
	cin  >> znak2;	
	if (znak2 == "t" || znak2 == "T")
				goto poczatek;
				
	
	cout << "Wykonanie ostatniego cout." << "\n";
	
	system("pause");
}
