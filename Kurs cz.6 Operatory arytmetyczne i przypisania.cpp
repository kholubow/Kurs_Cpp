#include <iostream>

using namespace std;
main()
{	
	int a = 4, b = 10, c = a + b, d = a - b, e = b/a, f = a * b, i;
	cout << "Wczytanie c (a + b): " << "\n";
	cout << c << endl;		
	// Operator dodawania: +


	cout << "Wczytanie d (a - b): " << "\n";
	cout << d << endl;	
	// Operator odejmowania: -	
	
	
	cout << "Wczytanie e (b/a): " << "\n";
	cout << e << endl;	
	// Operator dzielenia: /	
	
	
	cout << "Wczytanie f (a*b): " << "\n";
	cout << f << endl;	
	// Operator mno¿enia: *, * inaczej asterisk
	
	
	cout << "dzielenie z modulo 2 % 5: " << "\n";
	cout << 2 % 5 << endl;		
	cout << "dzielenie z modulo 6 % 5: " << "\n";
	cout << 6 % 5 << endl;
	cout << "dzielenie z modulo 13 % 5: " << "\n";
	cout << 13 % 5 << endl;
	
	
	
	// Dodawanie do ju¿ istniej¹cych rzeczy czegoœ nowego.
	// Operatory logiczne na tym, co ju¿ mamy.
	c += 4; // c = c + 4;
	cout << "Wczytanie c (a+b) po modyfikacji + 4: " << "\n";
	cout << c << endl;		
	c *= 2; // c = c * 2;
	cout << "Wczytanie c (a+b) po modyfikacji * 2: " << "\n";
	cout << c << endl;
	
	
	
	// Operatory inkrementacji i dekrementacji.
	i = 0;
	i++;
	// ++ operator post inkrementacji, po
	// pre inkrementacja, przed
	cout << "Wczytanie i post inkrementacja: " << "\n";
	cout << i << endl;
	cout << "Wczytanie i pre inkrementacja: " << "\n";
	cout << ++i << endl;
	i--;
	cout << "Wczytanie i post dekrementacja: " << "\n";
	cout << i << endl;
	cout << "Wczytanie i pre dekrementacja: " << "\n";
	cout << --i << endl;
	// i++ czyli i+=1 lub i = i + 1
	system("pause");
}
