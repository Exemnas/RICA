#include <iostream>
#include <string>
#include "RICA_Math.h"

using namespace std;


int Math::mathMain()
{
	while(userMathChoice != 5)
	{
	cout << " This is the Math menu. " <<'\n'<< endl;
	cout <<'\n'<<" Please input the first integer for calculation >>  ";
	cin >> firstInteger;
	cout <<'\n'<<" Please input the second integer for calculation >>  ";
	cin >> secondInteger;

	system("CLS");
	cout << '\n' << "First Input: " << firstInteger << "      Second Input: " << secondInteger << '\n'<<'\n';
	cout << " What would you like to do with these numbers? " << endl;
	cout << '\n'<<" 1. Add "<<endl;
	cout << " 2. Subtract " << endl;
	cout << " 5. Return to Main Menu" << endl;
	cin >> userMathChoice;
	mathFunction(userMathChoice);
	}
	return 0;
}

void Math::mathFunction(int mathchoice)
{
	switch(mathchoice)
	{
		//add firstInteger and secondInteger
	case 1:
		system("CLS");
		sumInteger = firstInteger + secondInteger;
		cout <<'\n'<< "  " << firstInteger << " + " << secondInteger << " = " << sumInteger <<'\n'<<'\n';
		system("Pause");
		system("CLS");
		break;
	
		//subtract firstInteger and secondInteger
	case 2:
		system("CLS");
		diffInteger = firstInteger - secondInteger;
		cout <<'\n'<< "  " << firstInteger << " + " << secondInteger << " = " << diffInteger <<'\n'<<'\n';
		system("Pause");
		system("CLS");
		break;
	
	case 5:
		system("CLS");
		cout <<'\n'<< "I will gladly take you back to my main menu. ;)" <<'\n'<<endl;
		break;

	default:
		break;
	}

}