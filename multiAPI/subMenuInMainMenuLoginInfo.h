#ifndef _UBER_SUBMENUINMAINMENULOGININFO
#define _UBER_SUBMENUINMAINMENULOGININFO 1

#include <iostream>

using namespace std;

template<typename T>
class SubMenuInMainMenuLoginInfo
{
	protected:
		T x;
	public:
		void subMenuInMainMenuLoginInfo();
};

template<typename T>
void SubMenuInMainMenuLoginInfo<T>::subMenuInMainMenuLoginInfo()
{
		cout << "------------------------------------------------------------------" << endl;
		cout << "| You have to login first. PRESS 1 and ENTER to continue         |" << endl;
		cout << "| PRESS 2 and ENTER to get global statistics                     |" << endl;
		cout << "------------------------------------------------------------------" << endl;		
}

#endif
