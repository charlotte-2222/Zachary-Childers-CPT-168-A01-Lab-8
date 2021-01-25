// Zachary-Childers-CPT-168-A01-Lab-8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{ //start
	char userLoop = ' '; //variable declaration for loop
	do //loop start point
	{
		//System clearing function, color, and my information
		system("cls");
		system("color b0");
		cout << "\n\t\t\t******************************";
		cout << "\n\t\t\t*      Zachary Childers      *";
		cout << "\n\t\t\t*      Lab - 8 - Arrays      *";
		cout << "\n\t\t\t*        CPT-168-A01         *";
		cout << "\n\t\t\t******************************";

		//Begin Array, declare input
		string calendar[] = { " ", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
		string flower[] = { " ", "Carnation", "Iris", "Daffodil", "Daisy", "Lily of the Valley", "Rose", "Sunflower", "Gladiolus", "Aster", "Snapdragon", "Chrysanthemum", "Orchid" };
		int input = 0;

		cout << "\n\t\t\tPlease enter your birth month <1 - 12>: ";
		cin >> input;

		if (input <=0 || input >= 13) //Condition to return invalid input on '0'
			cout << "\n\t\t\t\tInvalid number entered!" << endl;
		else
		{

			while (input <= 12 && flower[input] == calendar[input]) //User selection
				input += 1;

			if (input <= 12) //Output of process based on input
				cout << "\n\t\tYour birth flower is: " << flower[input] << ", and your birth month is: " << calendar[input] << endl;

			else
				cout << "\n\t\t\t\tInvalid number entered!" << endl; // non-zero invalid return
		}
			//Loops the program to user input on 'Y', else end
			cout << "\n\t\tWould you like to run any additional numbers? (Y/N): "; 
			cin >> userLoop;
			userLoop = toupper(userLoop);
		

	} while (userLoop == 'Y'); //loop end point
	
	//Last good-byes
	cout << "\n\t\t\tThank you for running this program!!!";
	cout << "\n\t\t\tYour contribution assists me in becoming the best programmer I can be :)" << endl;
	system("pause");
	return 0;
} //end

