#include <iostream>

using namespace std;
main()
{	
	/*
	wyr1: 4 > 7; 0
	wyr2: 5 < 9; 1
	Koniunkcja && (ampersand) - (i) - dwa wyra¿enia musz¹ byæ spe³nione w tym samym momencie.
	wy1 && wyr2
	(wy1) && (wyr2)
	czyli koniunkcja = 0
	wyr1 i wyr2 musi mieæ 1
	
	*/	
	cout << "&& (0): " << "\n";
	cout << ((4 > 7) && (5 < 9)) << endl;
	
	/*
	
	Alternatywa - jedno 1 daje ju¿ wynik true. Z wielu wyra¿eñ wyr tylko jedno musi byæ 1 aby ca³oœæ da³a 1
	|| (lub)
	alternatywa wszystkie wyr musz¹ byæ false aby ca³oœæ da³a 0
	
	*/
	cout << "|| (1): " << "\n";
	cout << ((4 > 7) || (5 < 9)) << endl;
	
	
	cout << "&& dla dlugiego wyrazenia (1): " << "\n";
	cout << (((4 > 7) || (5 < 9)) && ((4 > 7) || (5 < 9))) << endl;	
	cout << "&& dla dlugiego wyrazenia z negacja (0): " << "\n";
	cout << !(((4 > 7) || (5 < 9)) && ((4 > 7) || (5 < 9))) << endl;	
	cout << "|| negacja jednego z wyrazen (0): " << "\n";
	cout << ((4 > 7) || !(5 < 9)) << endl;
/*
 Operator negacji: !
*/
	
	system("pause");
}
