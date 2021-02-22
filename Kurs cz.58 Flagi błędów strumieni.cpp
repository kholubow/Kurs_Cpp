#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	/*
		Podczas czytania ci¹gu znaków i wpisania go do int, to powstaje b³¹d.
		lub
		Otwarty plik jest tylko do odczytu a my chcemy w nim zapisaæ.
		wtedy
		strumieñ zmienia swój stan
		takie stany do poznania,
	
	
	
		
		bad(); badbit - funkcja bad, stan reprezentowany jest w pamiêci przez badbit - zwraca true,
		je¿eli powstanie jakiœ b³¹d.
		fail(); failbit - prawie jak funkcja bad, zwraca true, je¿eli wczytamy np. ci¹g znaków do 
		liczby typu integer.
		failbit pojawia siê równie¿ wtedy, gdy pojawia siê badbit.
		badbit nie pojawi siê równie¿ wtedy, gdy pojawi siê failbit.
		bad() zadzia³a w bardziej krytycznych momentach ni¿ fail(), gdy np. nie mo¿na zapisaæ
		do pliku tylko do odczytu.
		
		
		
		good(); goodbit - funkcja good, zwraca true, je¿eli wszystko jest w porz¹dku.
		fa³sz, gdy którakolwiek z flag zwraca true.
		
		Do wykorzystania w ci¹g³ym sprawdzaniu podczas modyfikowania pliku, czy wszystko
		jest do tej pory okej.
		
		
		
		
		eof() - eofbit - End Of File - zwraca true, je¿eli otwarty plik do odczytu osi¹gnie koniec, 
		zosta³ przeczytany.
		Wykonywanie pêtli na plikach np. txt, a¿ osi¹gniemy koniec pliku.
		W zwi¹zku ze stanem eof jest:
		
		
		
		
		
		rdstate() - read state - przeczytaj stan.
		Ale
		badbit(1)
		failbit(4)
		eofbit(2)
		goodbit(0)
		Wiêc zwracana wartoœæ przez rdstate() to jest suma powy¿szych, które aktualnie siê wywo³a³y.
		clear() - czyœci stan.
		| & ^ operatory bitowe.
	OR, AND, XOR
	*/
	fstream file;
	// Plik tylko do odczytu, próba zapisu, wywo³anie tak funkcji bad()
	file.open("test.txt", ios::in);
	if (file.is_open())
	{
		file << "test";
		
		if (file.bad())
		{
			cout << "[1]Krytyczny blad" << endl;
		}
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}	





	
	file.close();		
	file.open("test.txt", ios::in);
	if (file.is_open())
	{
		//file << "test";
		
		if (file.bad())
		{
			cout << "[2]Krytyczny blad" << endl;
		}
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}	





	
	file.close();	
	file.open("test.txt", ios::in);
	if (file.is_open())
	{
		//file << "test";
		
		if (file.good())
		{
			cout << "[3]Jest okej" << endl;
		}
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}
	
	
	
	
	
	file.close();	
	file.open("test.txt", ios::in);
	if (file.is_open())
	{
		
		string buffer; // Bufor - tymczasowe miejsce dla jakiejœ zmiennej.
		
		file >> buffer;
		
		if (file.fail())
		{
			cout << "[4]Failed file >> buffer string" << endl;
		}
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}		
	
	
	
	
	
	
	
	
	file.close();	
	file.open("test.txt", ios::in);
	if (file.is_open())
	{
		
		int buffer;
		
		file >> buffer;
		
		if (file.fail())
		{
			cout << "[5]Failed file >> buffer int" << endl;
		}
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}	






	file.close();	
	file.open("test.txt", ios::in);
	if (file.is_open())
	{
		
		int buffer;
		
		file >> buffer;
		
		if (file.bad())
		{
			cout << "[6]bad file >> buffer int" << endl;
		}
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}
	
	
	
	
	
	
	file.close();	
	file.open("test.txt", ios::in);
	if (file.is_open())
	{
		
		string buffer;
		
		do 
		{
			file >> buffer;
			cout << buffer << endl;
					
		} while (!file.eof());
		
		if (file.bad())
		{
			cout << "[7]bad file >> buffer string" << endl;
		}
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}
	
	
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
		
	
	
	
	
	file.close();	
	file.open("test.txt", ios::in);
	if (file.is_open())
	{
		
		string buffer;
		
		do 
		{
			file >> buffer;
			cout << buffer << endl;
					
		} while (!file.eof());
		
		
		cout << "file.rdstate(): " << endl;
		cout << file.rdstate() << endl;
		
		
		/*
			Tylko, gdy wszystko jest okej z plikiem pozwoli na wykonanie funkcji good().
			Je¿eli np, na koñcu pliku tekstowego zostanie wstawiony sam enter (pusta linia)
			to funkcja good() siê nie wykona. (próba przypisania pustej lini do zmiennej 
			typu string.
		*/
		if ((file.rdstate() ^ ifstream::eofbit) == 0)
			file.clear();
		
		if (file.good())
		{
			cout << "[8]good file >> buffer string" << endl;
			cout << "Operacja wykonana prawidlowo" << endl;
			cout << "Dalsze instrukcje do wykonania, jezeli z plikiem jest okej" << endl;
		}
	} 
	else
	{
		cout << "Plik nie zostal otwarty prawidlowo." << endl;	
	}
	
	
	

	system("PAUSE");
	return 0;
}
