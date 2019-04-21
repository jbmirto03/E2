/*

PROBLEM 2: 
Write a program that computes a customer’s water bill.
The bill includes a P35 water demand charge plus a consumption(use) charge of P1.10 for every gallon used.
Consumption is figured from meter readings in gallons taken recently and during the previous month.
If the customer’s unpaid balance is greater than 0, a P20 late charge is assessed as well.

*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int g;

	cout << "How many gallons of water have you consumed based on the meter reading? "; 
	cin >> g;
	
	if (g < 0)
	
	cout << "\nInvalid amount! Please run the program again and enter a valid value to proceed to payment."; //stops to program if negative integers were entered when asked for gallons consumed
	
	else
	
		{
			float dC = 35, cC = 1.10, tC = dC + (cC * g), tCL = tC + 20, aP; //dC = demand charge, cC = consumption charge, tC = total charge, tCL = total late charge, aP = amount paid
	
			cout << "How much have you paid? ";
			cin >> aP;
	
			if (aP < tC) //if amount paid is less than the total charge, the code below runs
	
				{
					cout << "\nOOF. Your water bill costs P" << tCL << ", including an additional late charge fee of P20. \nPlease pay proper amount: ";
					cin >> aP;
			
					if (aP < tCL) //if amount paid is still less than the requested amount, the code below runs
	
						{	
							cout << "\nInvalid payment! Please run the program again to pay right amount." << endl; //prompts the customer to re-run the program to pay right amount
						}
				
					else
					
						{	
							cout << "\nPayment accepted! You have a total change of P" << aP - tCL << "." << endl; //calculates the change from the amount paid and total charge w/ late payment fee
						}
				}
	
			else
			
				{
					cout << "\nPayment accepted! Your water bill costs P" << tC << " with a total change of P" << aP - tC << "." << endl; //calculates the change from the amount paid and total charge
				}
		}
		
	_getch();
	return 0;
}
