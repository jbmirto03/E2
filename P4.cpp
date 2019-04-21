/* 

PROBLEM 4: 

Create a program that will accept three numbers as input and display the LARGEST number of the three. See the sample output below:

Enter first number: 12
Enter second number: 36
Enter third number: 24

The LARGEST of the three numbers is 36.

*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	float n1, n2, n3;
	
	cout << "Enter first number: ";		cin >> n1; 	//allows for float value of 1st number be entered from keyboard
	cout << "Enter second number: ";	cin >> n2; 	//allows for float value of 2nd number be entered from keyboard
	cout << "Enter third number: ";		cin >> n3; 	//allows for float value of 3rd number be entered from keyboard
	
	if ((n1 >= n2) && (n1 >= n3))
		cout << "\nThe LARGEST of the three numbers is " << n1 << ".\n";
	
	else if ((n2 >= n1) && (n2 >= n3))
			cout << "\nThe LARGEST of the three numbers is " << n2 << ".\n";
	
	else
		cout << "\nThe LARGEST of the three numbers is " << n3 << ".\n";
	
	_getch();
	return 0;
}
