#include <iostream>

using namespace std;

int main()
{
	/*
		Iteracja - powtarzanie - pêtla
	*/	
	int ile, w = 1;
	cout << "Z ilu chcesz obliczyæ silnie? ";
	cin >> ile;
	cin.ignore(); // Ignorowanie entera w buforze wprowadzanych danych.
	cout << endl;
	
	/*
		Dzia³anie:
			ile = 5;
			i = 1
			w = w * i
			
		1	w = 1 * 1 = 1
		2	w = 1 * 2 = 2
		3   w = 2 * 3 = 6
		4   w = 6 * 4 = 24
		5   w = 24 * 5 = 120
	*/	
	for(int i = 1; i <= ile; i++)
	{
		w *= i;
	}
	
	cout << "Silnia z " << ile << " wynosi " << w;


	getchar();
	system("PAUSE");
	return 0;
}
