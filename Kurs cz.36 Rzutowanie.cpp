#include <iostream>


using namespace std;


int main()
{
	int zm = 5;	
	double zm2 = 10.5;
	// zm czyli int zosta³o rzutowane jako double
	cout << zm2 / zm << endl;
	
	
	double zm3 = 10.5;
	// (int)zm3; - rzutowanie
	// (typ_na_ktory_rzutujemy)nazwa_zmiennej
	int zm4 = (int)zm3;
	cout << zm4 << endl;


	cout << 5 / 7 << endl;
	cout << 5.0 / 7 << endl; // niejawne rzutowanie
	cout << (double)5 / 7 << endl; //jawne rzutowanie w stylu jêzyka C
	cout << double(5) / 7 << endl; //jawne rzutowanie w stylu jêzyka C
	cout << static_cast<double>(5) / 7 << endl; //jawne rzutowanie, rzutowanie takie w stylu C++. Tak
	// powinno siê rzutowaæ.
	// Jêzyk C++ rozszerza C, ma du¿o podobieñstw ale te¿ sporo nowych rzeczy.
	// static_cast sprawdza, czy mo¿na wykonaæ rzutowanie zanim je zrobi.
	
	char zn;
	cout << "Sprawdz, jaki kod ASCII ma litera. Wpisz ja: " << endl;
	cin >> zn;
	cout << zn << endl;
	cout << (int)zn << endl;
	// char jest od -128 do 127
	

	system("pause");
	return 0;
}
