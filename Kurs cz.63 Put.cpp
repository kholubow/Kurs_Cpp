#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	/*
		put(znak do po³o¿enia na strumieniu) - funkcja
		put jest w ofstream, w ifstream tego nie ma.
		
	*/
	string txt = "poszarpanyTekst";
	for (int i = 0; i < txt.length(); i++)
	{
		cout.put(txt[i]).put('  ');
	}
	
	
	cout << endl;
	cout.put('l');
	cout << endl;
	
	fstream file;	
	file.open("test.txt", ios::out | ios::binary);
	if (file.is_open())
	{
		char c;
		do
		{
			c = cin.get();	
			
			file.put(c);
		}
		while(c != '.');
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}

	
	system("PAUSE");
	return 0;
}
