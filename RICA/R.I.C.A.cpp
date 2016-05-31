/*
As of 10/16/14:
 R.I.C.A. is a personal program created by Steven Gary Adcock III. This program is meant for my development portfolio, but it will continue to grow into eventually a virtual AI companion. 
 While this will take time to perfect, this program will be under constant construction and innovation.
*/
#include <iostream>
#include <string>
#include "RICA_Math.h"

using namespace std;

string hello = " Hello user, ";
string name = "R.I.C.A.";
string userName = " ";

Math math;


void switchChoice(int input)
{
	switch(input)
	{
	case 1:
		system("CLS");
			cout <<'\n'<< " R.I.C.A. stands for Responsive Interactive Computing Application." << endl << " I am a product of Steven Adcock, also known as Exemnas on the internet." << endl << " I am still under development, but intend to get better." << endl<<endl;
		break;

	case 2:
		system("CLS");
		cout <<"Math"<<endl<<'\n';
		//this calls the math main menu
		math.mathMain();
		cout <<'\n';
		break;
		
	case 9:
		system("CLS");
		cout<<'\n' <<" I will miss you "<< userName << ". See ya sometime soon ;)"<<'\n'<<'\n';
		break;

	default:
		system("CLS");
		cout<<'\n'<< "I'm afraid I do not understand the request. Please try again ;) "<<endl;
		break;
	}
}

int main()
{
	int userInput = 0;
	
	//intro
	cout <<'\n'<< hello << " my name is " << name << endl;
	cout << " What is your name? ";
	cin >> userName;
	system("CLS");

	//if userInput is 9, R.I.C.A. will shutdown
	while(userInput != 9)
	{
	cout << endl << "What can I do for you "<< userName << "?" <<endl;

	//menu selections
	//R.I.C.A.
	cout <<" 1. What does R.I.C.A. stand for? "<<endl;
	//Math Functions
	cout <<" 2. Math"<<endl;

	//exit selection
	cout <<" 9. Exit R.I.C.A. "<<endl;
	cin >> userInput;
	switchChoice(userInput);

	system("Pause");
	system("CLS");
	}
};