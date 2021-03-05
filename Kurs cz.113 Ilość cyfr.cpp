#include <iostream>

using namespace std;

int main()
{
	/*
		Dzielenie liczby ca³kowitej w taki sposób, ¿e na koñcu mo¿na dowiedzieæ siê, ile ma cyfr.
		Dopóki liczba wprowadzona przez u¿ytkownika daje siê dzieliæ przez 10, dopóty jest 
		postinkrementowana wartoœæ k.
	*/
	int n, k;
	
	cout << "Podaj liczbe calkowita: " << endl;
	cin >> n;
	cin.ignore();
	
	for(k = 1; n /= 10; k++);
		
	cout << "Liczba cyfr: " << k << endl;


	getchar();
	system("PAUSE");
	return 0;
}
