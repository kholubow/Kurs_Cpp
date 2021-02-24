#include <iostream>
#include <vector>

using namespace std;

int main()
{
	/*
		Zamiast tego:
				wholeNumbers.push_back(20); 
				wholeNumbers.push_back(10);
				wholeNumbers.push_back(4);
				wholeNumbers.push_back(-3);
				wholeNumbers.push_back(25);
				
		Lepsze to:
				vector<int> wholeNumbers {20, 10, 4, -3, 25};
				
		Ale potrzebujemy w³¹czyæ flagê, aby tak zrobiæ:
				Go to Tools -> Compiler Options -> "Compiler" tab

				Check the checkbox labeled, "Add the following commands when calling the compiler" 
				And add in the text entry box, "-std=c++11" or if that doesn't work "-std=C++0x"
		
		
		Taki feature z C++11
	*/
	
	vector<int> wholeNumbers {20, 10, 4, -3, 25};
	
/*
	wholeNumbers.push_back(20); 
	wholeNumbers.push_back(10);
	wholeNumbers.push_back(4);
	wholeNumbers.push_back(-3);
	wholeNumbers.push_back(25);
*/

	cout << "wholeNumbers[0]: " << endl;
	cout << wholeNumbers[0] << endl;
	
	
	

	system("PAUSE");
	return 0;
}
