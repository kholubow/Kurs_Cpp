#include <iostream>

using namespace std;

template<typename T>
class Punkt //klasa rodzic, klasa bazowa, superklasa
{
      protected:
      T x;
      public:
       Punkt(T =0);
       virtual ~Punkt();
       T getX();
       void setX(T);
};
template<typename T>
Punkt<T>::Punkt(T x)
{
    cout << "Zostal wywolany konstruktor z klasy Punkt " << endl;
    this->x = x;             
}
template<typename T>
Punkt<T>::~Punkt()
{
   cout << "Zostal wywolany destruktor z klasy Punkt " << endl;            
}
template<typename T>
T Punkt<T>::getX()
{
    return this->x;
}

template<>
double Punkt<double>::getX()
{
	cout << "getX(), do szablonu wyslano typ double" << endl;
	return this->x;
}

template<>
class Punkt<char>
{
	public:
		Punkt(char a = 0) { cout << "Nie wolno tworzyc z tego szablonu typu char" << endl; }	
};

template<typename TYP>
class Punkt<TYP*>
{
	public:
		Punkt() { cout << "Przekazywanie wskaznikow do tego szablonu jest zabronione." << endl; };
};


template<typename T>
class Punkt2D : public Punkt<T> //klasa dziecko, klasa pochodna, subclass
{
       protected:
       T y;
       public:
         Punkt2D(T =0, T =0);
         ~Punkt2D();
         T getY();
         void setX(T);
         void setY(T);
         void setXY(T, T);
         Punkt2D operator+(Punkt2D);
         
};
template<typename T>
void Punkt<T>::setX(T x)
{
    cout << "ja jestem z punkt" << endl;     
    this->x = x;
}
template<typename T>
Punkt2D<T>::Punkt2D(T x, T y) : Punkt<T>(x)
{
    cout << "Zostal wywolany konstruktor z klasy Punkt2D " << endl;                     
    this->y = y;                
}
template<typename T>
Punkt2D<T>::~Punkt2D()
{
    cout << "Zostal wywolany destruktor z klasy Punkt2D " << endl;                              
}
template<typename T>
T Punkt2D<T>::getY()
{
    return this->y;
}
template<typename T>
void Punkt2D<T>::setY(T y)
{
   this->y = y;
}
template<typename T>
void Punkt2D<T>::setXY(T x, T y)
{
     setX(x);
     setY(y);
}
template<typename T>
void Punkt2D<T>::setX(T x)
{
     cout << "ja jestem z punkt2d" << endl;
    this->x = x; 
}
template<typename T>
Punkt2D<T> Punkt2D<T>::operator+(Punkt2D<T> obj)
{
    Punkt2D<T> tmp;
    
    tmp.setX(this->getX() + obj.getX());
    tmp.setY(this->getY() + obj.getY());    
    
    
    return tmp;
}




/*
class Punkt3D : public Punkt2D
{

};
/*
  class Punkt2D : public Punkt
   wszystko co znjaduje sie w Punkt2D(oprocz konstruktora i destruktora), w Punkt stanie siê:
   private zmieni siê na NIEDOSTÊPNE
   protecteed bedzie dalej protected
   public bedzie dalej public
   
  class Punkt2D : protected Punkt
   wszystko co znjaduje sie w Punkt2D(oprocz konstruktora i destruktora), w Punkt stanie siê:
   private zmieni siê na NIEDOSTÊPNE
   protected bedzie dalej protected
   public bedzie dalej protected   
   
 class Punkt2D : private Punkt
   wszystko co znjaduje sie w Punkt2D(oprocz konstruktora i destruktora), w Punkt stanie siê:
   private zmieni siê na NIEDOSTÊPNE
   protected bedzie dalej private
   public bedzie dalej private    

*/
