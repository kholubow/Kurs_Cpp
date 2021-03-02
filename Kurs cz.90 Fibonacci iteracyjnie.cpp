#include <iostream>

using namespace std;
// wart. 0, 1, 2, 3, 4, 5, 6, 7,  8,  9,  10,  11,  12,  13,  14,  15,  16,  ...
// wynik 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55,  89,  144, 233, 377, 610, 987, ...

int main()
{
	/*
		Dzia³anie:
		
		Np. dla 8
		ktora = 8
		8 =/= 0, 8 =/= 1, 8 =/= 2
		
		for:
		3.
		w = 1 + 1
		a = 1
		b = 2
		4.
		w = 1 + 2
		a = 2
		b = 3
		5.
		w = 2 + 3
		a = 3
		b = 5
		6.
		w = 3 + 5
		a = 5
		b = 8
		7.
		w = 5 + 8
		a = 8
		b = 13
		8.
		w = 8 + 13
		a = 13
		b = 21
		
		w jest wynikiem, czyli 21
		
		
		Podejœcie iteracyjne jest du¿o szybsze od rekurencyjnego.
		Nawet dla du¿ych liczb >= 100 otrzymanie wyniku to kwestia krótkiej chwili.
	*/	
	unsigned int ktora, w; // bezznakowe int, tylko dodatnie liczby, znak = -.
	
	cout << "Ktora liczbe z ciagu Fibonacciego chcesz zobaczyc? ";
	cin >> ktora;
	cin.ignore();
	
	int a = 1, b = 1;
	
	if(ktora == 0)
		w = 0;
	else if (ktora == 1 || ktora == 2)
		w = 1;
	else
	{
		for(int i = 3; i <= ktora; i++)
		{
			w = a + b;
			a = b;
			b = w;
		}
	}
	
	cout << "Fib (" << ktora << ") = " << w;
	

	getchar();
	system("PAUSE");
	return 0;
}
