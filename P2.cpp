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
	int usedGallons;
	float pastMonth, totalCost;
	const float demandCharge = 35, conCharge = 1.10; // Constant values given in the problem

	cout << "Enter unpaid amount from the past month: ";	cin >> pastMonth; // To check if customer has debt from the past month
	cout << "Enter gallons consumed in the current month: ";	cin >>	usedGallons;
		
	if (pastMonth < 0 || usedGallons < 0 ) // If negative integers are entered
	cout << "\nInvalid amount!" << endl;

	else if (pastMonth > 0) // Total water bill with late charge
		{
			totalCost = demandCharge + (conCharge * usedGallons) + pastMonth + 20;
			cout << "\nYour water bill costs: P" << totalCost << endl;
		}

	else // Total water bill without late charge
		{
			totalCost = demandCharge + (conCharge * usedGallons);
			cout << "\nYour water bill costs: P" << totalCost << endl;
		}

	_getch();
	return 0;
}
