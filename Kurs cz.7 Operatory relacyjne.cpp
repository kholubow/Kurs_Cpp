#include <iostream>

using namespace std;
main()
{	
	// Relacyjne, relacje miêdzy zmiennymi.
	// Jedna jakoœ odnosi siê do drugiej.
	int a = 5, b = 10;
	
	// nawiasy, czyli najpierw ma wykonaæ, potem wypisaæ
	cout << "Czy a = b (nie): " << "\n";
	cout << (a == b) << endl;
	a = 10;
	cout << "Czy a = b (tak): " << "\n";
	cout << (a == b) << endl;
	cout << "Czy a != b (nie): " << "\n";
	cout << (a != b) << endl;
	a = 5;
	cout << "Czy a != b (tak): " << "\n";
	cout << (a != b) << endl;	
	// podwójny operator zaprzeczenia
	cout << "Czy a != b (nie, podwojny op. zaprzeczenia): " << "\n";
	cout << !(a != b) << endl;


	// wiêksze od
	cout << "Czy a > b (nie): " << "\n";
	cout << (a > b) << endl;
	cout << "Czy a < b (tak): " << "\n";
	cout << (a < b) << endl;
	a = 10;
	cout << "Czy a >= b (tak): " << "\n";
	cout << (a >= b) << endl;	
	cout << "Czy a <= b (tak): " << "\n";
	cout << (a <= b) << endl;		
	system("pause");
}
