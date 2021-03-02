#include <iostream>

using namespace std;

int Potega(int); // Funkcja zwracaj¹ca wartoœæ typu int, przyjmuje dwa parametry. Deklaracja

int a, w;

int main()
{
	/*
	int a, w;
		Globalne zmienne, automatycznie przyjmuj¹ wartoœci zerowe w przypadku braku 
		podania ich definicji w przeciwieñstwie do zmiennych lokalnych, które mog¹
		w przypadku nie podania startowej wartoœci przyjmowaæ losowe elementy (wartoœci)
		z pamiêci, choæby nawet z innego programu.
	
		
		Potêgowanie = mno¿enie siebie przez siebie;
		a^3 = a * a * a
		
		Podejœcie rekurencyjne do algorytmu jest du¿o gorsze z uwagi na znacznie wiêksze
		zu¿ycie pamiêci, przez co wyniki nie bêd¹ tak sprawnie uzyskiwane jak w przypadku 
		podejœcia iteracyjnego do algorytmu.
		Spowodowane to jest faktem samej konstrucji rekurencji, odwo³ywanie siê funkcji do
		samej siebie, czyli nawet setki tysiêcy zapytañ w przypadku wiêkszych obliczeñ.
	*/	
	cout << "Podaj podstawe potegi: ";
	cin >> a;
	cin.ignore();
	
	cout << "Podaj wykladnik: ";
	cin >> w;
	cin.ignore();
	
	cout << a << "^" << w << " = " << Potega(w) << endl;
	
	getchar();
	system("PAUSE");
	return 0;
}

/*
	Dzia³anie:
		Wyj¹tki:
			a^0 = 1
			a^1 = a 
			
			a^2 = a * a
			a^3 = a * a * a
		Wyprowadzenie:
			a^n = a * a * ... * a(n-1)
		
		a(n-1) - wywo³anie rekurencyjnie	
*/
int Potega(int n) // Definicja
{
	if (n == 0)
		return 1;
	else
		return a * Potega(n-1);
}
