/* 

PROBLEM 1: 

An Internet service provider has 3 different subscription packages for its customers:

Package A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr.
Package B: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr.
Package C: For P1995/mo of unlimited access is provided.

Write a program that calculates a customer’s monthly bill. 
It should ask which package the customer has purchased and how many hours were used. 
It should then display the total amount due. 

*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
    char subPack; // subscription package
    float tHours, tCost; // tHours = hours consumed, tCost = total amount due
    bool payUp = false;

	do
	{
		cout << "Good day, customer!\n\nWhich package have you purchased? ";	cin >> subPack;
        cout << "How many hours have been used? ";	cin >> tHours;
		
		switch(subPack)
			{
				case 'A':
				case 'a':
					if (tHours < 10) // Provided 10 hrs of access
					tCost = 995;
					else
					tCost = 995 + (tHours - 10) * 20; // Formula for subscription package A where base price (995) is added to additional hours (# hrs consumed - 10 base hrs provided) multiplied to 20 (cost per additional hour)
					break;
				case 'B':
				case 'b':
					if (tHours < 20) // Provided 20 hrs of access
					tCost = 1495;
					else
					tCost = 1495 + (tHours - 20) * 10; // Formula for subscription package A where base price (995) is added to additional hours (# hrs consumed - 10 base hrs provided) multiplied to 10 (cost per additional hour)
					break;
				case 'C':
				case 'c':
					tCost = 1995; // Sobrang sulit
					break;
				default:
					break;
			}
			
		if (subPack != 'A' || subPack != 'a' || subPack != 'B' || subPack != 'b' || subPack != 'C' || subPack != 'c') // Not in 'default:' so Total amount due does not appear
    		{
    			cout << "\nInvalid package!" << endl; // Displays when negative hours are entered
    			break;
			}
		
		if (tHours < 0)
    		{
    			cout << "\nInvalid hours!" << endl; // Displays when negative hours are entered
    			break;
			}
		
		else
		cout << "\nTotal amount due: P" << tCost << "\n\n" << endl;
		
	} while (!payUp); // oompa loopa

    _getch();
    return 0;
}
