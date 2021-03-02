#include <iostream>

using namespace std;
// wart. 0, 1, 2, 3, 4, 5, 6, 7,  8,  9,  10,  11,  12,  13,  14,  15,  16,  ...
// wynik 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55,  89,  144, 233, 377, 610, 987, ...

int fib(int); // Funkcja, deklaracja, jeden parametr.

int main()
{
	/*
		Fibonacci:
		Ka¿da liczba, oprócz 0 i 1, jest sum¹ poprzednich dwóch
		Np. 2 = 1+1, 5 = 3+2, 8 = 5 + 3, itd.
		
		
		Rekurencyjnie - wywo³ywanie funkcji w niej samej.
		
		Dzia³anie:
		n = 8
		n =/= 0 i n =/= 1
		return fib(7)+fib(6)
		
		fib(7)
		return fib(6) + fib(5)
		fib(6)
		return fib(5) + fib(4)
		
		Po wpisaniu n = 40, komputer trochê mo¿e to liczyæ, tym bardziej po wpisaniu n = 100,
		tak du¿o jest kombinacji w rekurencyjnym podejœciu do tego problemu.
		Rekurencja jest dosyæ wolna, zajmuje pamiêæ.
		Setki tysiêcy kombinacji, niektóre kroki s¹ powtarzane podwójnie.
	*/	
	int n;
	
	cout << "Podaj wartosc do ciagu Fibonacciego: ";
	cin >> n;
	cin.ignore(); // Ignorowanie entera we wprowadzanym buforze danych.
	cout << endl;
	
	cout << "Fib (" << n << ") = " << fib(n) << endl;

	getchar();
	system("PAUSE");
	return 0;
}

int fib(int n) // Definicja funkcji zwracaj¹cej wartoœæ typu int.
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else if (n > 1)
		return fib(n-1) + fib(n - 2);
}
