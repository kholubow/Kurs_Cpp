#ifndef _UBER_SUB_MENU_IN_WELCOME_MENU_REGISTER_FORM
#define _UBER_SUB_MENU_IN_WELCOME_MENU_REGISTER_FORM 1

#include "namespacesForWelcomeMenu.h"
#include "namespacesForRegisterForm.h"
#include <iostream>
#include <conio.h>
#include <vector>
#include <string>
#include "hmac.h"

using namespace std;

template<typename T>
class SubMenuInWelcomeMenuRegisterForm
{
	protected:
		T x;
	public:
		void subMenuInWelcomeMenuRegisterForm();
};

template<typename T>
void SubMenuInWelcomeMenuRegisterForm<T>::subMenuInWelcomeMenuRegisterForm()
{
	char character;
	char ch;
	
	
	string error_msg = "Please insert data again.";
	string * pointerToErrorMsg = &error_msg;
	
	
	string firstNameError_msg = "Your first name is incorrect. Please try again.";
	string * pointerToFirstNameErrorMsg = &firstNameError_msg;
	
	
	string lastNameError_msg = "Your last name is incorrect. Please try again.";
	string * pointerToLastNameErrorMsg = &lastNameError_msg;
	
	
	string cityError_msg = "Your city is incorrect. Please try again.";
	string * pointerToCityErrorMsg = &cityError_msg;
	
	
	string emailError_msg = "Your email is incorrect. Please try again.";
	string * pointerToEmailErrorMsg = &emailError_msg;
	
	
	string passwordError_msg = "Your password is incorrect. Please try again.";
	string * pointerToPasswordErrorMsg = &passwordError_msg;
	
	
	string confirmPasswordError_msg = "Your confirm password option is incorrect. Please try again.";
	string * pointerToConfirmPasswordErrorMsg = &confirmPasswordError_msg;
	
	
	string usernameError_msg = "Your username is incorrect. Please try again.";
	string * pointerToUsernameErrorMsg = &usernameError_msg;
	
	
	string ageError_msg = "Your age is incorrect. Please try again.";
	string * pointerToAgeErrorMsg = &ageError_msg;
	
	
	string firstName = "";
	string * pointerToFirstNameValue = &firstName;
	
	
	string lastName = "";
	string * pointerToLastNameValue = &lastName;
	
	
	string city = "";
	string * pointerToCityValue = &city;
	
	
	string email = "";
	string * pointerToEmailValue = &email;
	
	
	string password = "";
	string * pointerToPasswordValue = &password;
	
	
	string confirmPassword = "";
	string * pointerToConfirmPasswordValue = &confirmPassword;
	
	
	string username = "";
	string * pointerToUsernameValue = &username;
	
	
	string age = "";
	string * pointerToAgeValue = &age;
	
	
	vector<string> allRegisterDataFromForm;
	vector<string>::iterator it = allRegisterDataFromForm.begin();
	
	
	vector<string> * pointerToAllRegisterDataFromFormVectorValue = &allRegisterDataFromForm;
	vector<string>::iterator * pointerToIteratorIt = &it; 
	
	
	string cryptographicallySecuredPassword = "";
	string cryptographicallySecuredConfirmPassword = "";
	string key = "Sup3RSecREtK3Y";
	
		
	do
	{
		cout << "------------------------------------------------------------------" << endl;
		cout << "| A - First Name                                                 |" << endl;
		cout << "| T - Last Name                                                  |" << endl;
		cout << "| C - City                                                       |" << endl;
		cout << "| D - E-mail                                                     |" << endl;
		cout << "| E - Password                                                   |" << endl;
		cout << "| F - Confirm Password                                           |" << endl;
		cout << "| G - Username                                                   |" << endl;
		cout << "| H - Age                                                        |" << endl;
		cout << "| I - Finish registration                                        |" << endl;
		cout << "| B - Back                                                       |" << endl;
		cout << "------------------------------------------------------------------" << endl;	
		character = getch();
		
		switch(character)
		{
			case 'A':
				cout << "First name have to have only letters ('a - z' and 'A - Z')" << endl;
				do 
				{ 
				
					cout << "Please insert your first name: " << endl; 
					cin  >> firstName; 
				
				}while(!verifyFirstName::verifyFirstNameFunction(pointerToFirstNameErrorMsg,pointerToFirstNameValue));
				break;
			case 'a':
				cout << "First name have to have only letters ('a - z' and 'A - Z')" << endl;
				do 
				{ 
				
					cout << "Please insert your first name: " << endl; 
					cin  >> firstName; 
				
				}while(!verifyFirstName::verifyFirstNameFunction(pointerToFirstNameErrorMsg,pointerToFirstNameValue));				
				break;	
			case 'T':
				cout << "Last name have to have only letters ('a - z' and 'A - Z')" << endl;
				do 
				{ 
				
					cout << "Please insert your last name: " << endl; 
					cin  >> lastName; 
				
				}while(!verifyLastName::verifyLastNameFunction(pointerToLastNameErrorMsg,pointerToLastNameValue));			
				break;
			case 't':
				cout << "Last name have to have only letters ('a - z' and 'A - Z')" << endl;
				do 
				{ 
				
					cout << "Please insert your last name: " << endl; 
					cin  >> lastName; 
				
				}while(!verifyLastName::verifyLastNameFunction(pointerToLastNameErrorMsg,pointerToLastNameValue));
				break;
			case 'C':
				cout << "City have to have only letters ('a - z' and 'A - Z')" << endl;
				do 
				{ 
				
					cout << "Please insert your city: " << endl; 
					cin  >> city;
				
				}while(!verifyCity::verifyCityFunction(pointerToCityErrorMsg,pointerToCityValue));
				break;
			case 'c':
				cout << "City have to have only letters ('a - z' and 'A - Z')" << endl;
				do 
				{ 
				
					cout << "Please insert your city: " << endl; 
					cin  >> city; 
				
				}while(!verifyCity::verifyCityFunction(pointerToCityErrorMsg,pointerToCityValue));
				break;
			case 'D':
				cout << "E-mail have to have only letters ('a - z' and 'A - Z') with numbers ('0' to '9') and also have to have ONE @ symbol" << endl;
				do 
				{ 
				
					cout << "Please insert your e-mail: " << endl; 
					cin  >> email; 
				
				}while(!verifyEmail::verifyEmailFunction(pointerToEmailErrorMsg,pointerToEmailValue));
				break;
			case 'd':
				cout << "E-mail have to have only letters ('a - z' and 'A - Z') with numbers ('0' to '9') and also have to have ONE @ symbol" << endl;
				do 
				{ 
				
					cout << "Please insert your e-mail: " << endl; 
					cin  >> email; 
				
				}while(!verifyEmail::verifyEmailFunction(pointerToEmailErrorMsg,pointerToEmailValue));
				break;	
			case 'E':
				cout << "Password can have all kind of symbols, letters, numbers. " << endl;
				cout << "Password have to have atleast 10 characters, including atleast 3 numbers, 3 small letters, 3 symbols and 1 big letter. " << endl;
				do 
				{
					
					password = "";
					cout << "Please insert your password: " << endl; 
					ch = _getch();
					while(ch != 13)
					{
							
						if (ch == 8)
						{
							password.pop_back();
							cout << '\b';
							cout << "";
							ch = _getch();
						}
						else
						{
							password.push_back(ch);
							cout << '*';
							ch = _getch();							
						}
							
					}
					cout << endl;
					
				}while(!verifyPassword::verifyPasswordFunction(pointerToPasswordErrorMsg,pointerToPasswordValue));
				break;
			case 'e':
				cout << "Password can have all kind of symbols, letters, numbers. " << endl;
				cout << "Password have to have atleast 10 characters, including atleast 3 numbers, 3 small letters, 3 symbols and 1 big letter. " << endl;								
				do 
				{ 
					
					password = "";
					cout << "Please insert your password: " << endl; 
					ch = _getch();
					while(ch != 13)
					{
							
						if (ch == 8)
						{
							password.pop_back();
							cout << '\b';
							cout << "";
							ch = _getch();
						}
						else
						{
							password.push_back(ch);
							cout << '*';
							ch = _getch();							
						}
							
					}
					cout << endl;
					
				}while(!verifyPassword::verifyPasswordFunction(pointerToPasswordErrorMsg,pointerToPasswordValue));
				break;	
			case 'F':
				cout << "Confirm password. " << endl;
				cout << "Passwords must match. " << endl;
				do 
				{	
				
					confirmPassword = "";
					cout << "Please insert your password again: " << endl; 
					ch = _getch();
					while(ch != 13)
					{
							
						if (ch == 8)
						{
							confirmPassword.pop_back();
							cout << '\b';
							cout << "";
							ch = _getch();
						}
						else
						{
							confirmPassword.push_back(ch);
							cout << '*';
							ch = _getch();							
						}
							
					}
					cout << endl;
					
				}while(!verifyConfirmPassword::verifyConfirmPasswordFunction(pointerToConfirmPasswordErrorMsg,pointerToConfirmPasswordValue,pointerToPasswordValue));
				break;
			case 'f':
				cout << "Confirm password. " << endl;
				cout << "Passwords must match. " << endl;
				do 
				{	
				
					confirmPassword = "";
					cout << "Please insert your password again: " << endl; 
					ch = _getch();
					while(ch != 13)
					{
							
						if (ch == 8)
						{
							confirmPassword.pop_back();
							cout << '\b';
							cout << "";
							ch = _getch();
						}
						else
						{
							confirmPassword.push_back(ch);
							cout << '*';
							ch = _getch();							
						}
							
					}
					cout << endl;
					
				}while(!verifyConfirmPassword::verifyConfirmPasswordFunction(pointerToConfirmPasswordErrorMsg,pointerToConfirmPasswordValue,pointerToPasswordValue));
				break;	
			case 'G':
				cout << "Username can have all kind of letters, numbers. " << endl;
				cout << "Username have to have atleast 5 characters. " << endl;	
				cout << "Username have to be unique in the database. " << endl;								
				do 
				{ 
					
					cout << "Please insert your username: " << endl; 
					cin  >> username;
					
				}while(!verifyUsername::verifyUsernameFunction(pointerToUsernameErrorMsg,pointerToUsernameValue));
				break;
			case 'g':
				cout << "Username can have all kind of letters, numbers. " << endl;
				cout << "Username have to have atleast 5 characters. " << endl;	
				cout << "Username have to be unique in the database. " << endl;								
				do 
				{ 
					
					cout << "Please insert your username: " << endl; 
					cin  >> username;
					
				}while(!verifyUsername::verifyUsernameFunction(pointerToUsernameErrorMsg,pointerToUsernameValue));
				break;
			case 'H':
				cout << "Age have to have only numbers." << endl;
				cout << "Only 18+ users are available." << endl;								
				do 
				{ 
					
					cout << "Please insert your age: " << endl; 
					cin  >> age;
					
				}while(!verifyAge::verifyAgeFunction(pointerToAgeErrorMsg,pointerToAgeValue));
				break;
			case 'h':
				cout << "Age have to have only numbers." << endl;
				cout << "Only 18+ users are available." << endl;								
				do 
				{ 
					
					cout << "Please insert your age: " << endl; 
					cin  >> age;
					
				}while(!verifyAge::verifyAgeFunction(pointerToAgeErrorMsg,pointerToAgeValue));
				break;
			case 'I':
				cout << "All data have to be completed." << endl;
				cout << "==============================" << endl;
				cout << endl;
				cout << endl;								
				
				if (!firstName.empty()       &&
					!lastName.empty()        &&
					!city.empty()            &&
					!email.empty()           &&
					!password.empty()        &&
					!confirmPassword.empty() &&
					!username.empty()        &&
					!age.empty())
				{
					
					allRegisterDataFromForm.clear();
					
					
					cryptographicallySecuredPassword        = hmac::get_hmac(key, password,        hmac::TypeHash::SHA512);
					cryptographicallySecuredConfirmPassword = hmac::get_hmac(key, confirmPassword, hmac::TypeHash::SHA512);
				
					
					allRegisterDataFromForm.push_back("Username: "         + username);
					allRegisterDataFromForm.push_back("Password: "         + cryptographicallySecuredPassword);
					allRegisterDataFromForm.push_back("First_name: "       + firstName);
					allRegisterDataFromForm.push_back("Last_name: "        + lastName);
					allRegisterDataFromForm.push_back("City: "             + city);
					allRegisterDataFromForm.push_back("Email: "            + email);
					allRegisterDataFromForm.push_back("Confirm_password: " + cryptographicallySecuredConfirmPassword);
					
					it = allRegisterDataFromForm.begin();
					saveDataFromRegisterForm::saveDataFromRegisterForm(pointerToErrorMsg,pointerToIteratorIt,pointerToAllRegisterDataFromFormVectorValue);

					username        = "";
					password        = "";
					firstName       = "";
					lastName        = "";
					city            = "";
					email           = "";
					confirmPassword = "";
					cryptographicallySecuredPassword        = "";	
					cryptographicallySecuredConfirmPassword = "";
					
					
					cout << "Data has been sent." << endl;
					
				}
				else
				{
					if      (firstName.empty())
					{
						
						cout << "Please complete correctly your first name" << endl;
						
					}
					else if (lastName.empty())
					{
						
						cout << "Please complete correctly your last name" << endl;
						
					}
					else if (city.empty())
					{
						
						cout << "Please complete correctly your city" << endl;
						
					}
					else if (email.empty())
					{
						
						cout << "Please complete correctly your email" << endl;
						
					}
					else if (password.empty())
					{
						
						cout << "Please complete correctly your password" << endl;
						
					}
					else if (confirmPassword.empty())
					{
						
						cout << "Please complete correctly your password again in [confirm password] option" << endl;
							
					}
					else if (username.empty())
					{
						
						cout << "Please complete correctly your username" << endl;
						
					}
					else if (age.empty())
					{
						
						cout << "Please complete correctly your age" << endl;
						
					}
					else
						cout << "Please complete all data correctly" << endl;
				}
				
				break;
			case 'i':
				cout << "All data have to be completed." << endl;
				cout << "==============================" << endl;
				cout << endl;
				cout << endl;								
				
				if (!firstName.empty()       &&
					!lastName.empty()        &&
					!city.empty()            &&
					!email.empty()           &&
					!password.empty()        &&
					!confirmPassword.empty() &&
					!username.empty()        &&
					!age.empty())
				{
					
					allRegisterDataFromForm.clear();
					
					
					cryptographicallySecuredPassword        = hmac::get_hmac(key, password,        hmac::TypeHash::SHA512);
					cryptographicallySecuredConfirmPassword = hmac::get_hmac(key, confirmPassword, hmac::TypeHash::SHA512);
				
					
					allRegisterDataFromForm.push_back("Username: "         + username);
					allRegisterDataFromForm.push_back("Password: "         + cryptographicallySecuredPassword);
					allRegisterDataFromForm.push_back("First_name: "       + firstName);
					allRegisterDataFromForm.push_back("Last_name: "        + lastName);
					allRegisterDataFromForm.push_back("City: "             + city);
					allRegisterDataFromForm.push_back("Email: "            + email);
					allRegisterDataFromForm.push_back("Confirm_password: " + cryptographicallySecuredConfirmPassword);
					
					it = allRegisterDataFromForm.begin();
					saveDataFromRegisterForm::saveDataFromRegisterForm(pointerToErrorMsg,pointerToIteratorIt,pointerToAllRegisterDataFromFormVectorValue);

					username        = "";
					password        = "";
					firstName       = "";
					lastName        = "";
					city            = "";
					email           = "";
					confirmPassword = "";
					cryptographicallySecuredPassword        = "";	
					cryptographicallySecuredConfirmPassword = "";
					
					
					cout << "Data has been sent." << endl;
					
				}
				else
				{
					if      (firstName.empty())
					{
						
						cout << "Please complete correctly your first name" << endl;
						
					}
					else if (lastName.empty())
					{
						
						cout << "Please complete correctly your last name" << endl;
						
					}
					else if (city.empty())
					{
						
						cout << "Please complete correctly your city" << endl;
						
					}
					else if (email.empty())
					{
						
						cout << "Please complete correctly your email" << endl;
						
					}
					else if (password.empty())
					{
						
						cout << "Please complete correctly your password" << endl;
						
					}
					else if (confirmPassword.empty())
					{
						
						cout << "Please complete correctly your password again in [confirm password] option" << endl;
							
					}
					else if (username.empty())
					{
						
						cout << "Please complete correctly your username" << endl;
						
					}
					else if (age.empty())
					{
						
						cout << "Please complete correctly your age" << endl;
						
					}
					else
						cout << "Please complete all data correctly" << endl;
				}
				
				break;
			case 'B':
				cout << endl;
				break;
			case 'b':
				cout << endl;
				break;
		}
		
		requireEnter::requireEnterMainMethodInWelcomeMenu();
		system("cls");
		
	} while(character != 'b' && 
			character != 'B');
}

#endif
