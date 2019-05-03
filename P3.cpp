/*

PROBLEM 3: The value of V depends on the values of x and y as follows:

V = xyz when x = 1 and 1 < y < 5
V = x + y/z when x = 1 and y >= 5
V = |(x - y)/z| when x = 2 and y <= 5
V = x - sqrt of [y + z] when x = 2 and y > 5
V = x + y + z for other values of x and y

Write a C++ program that accepts two integers x and y from the kbd. Let z = 2.5.
Use a constant declaration for z and output V with 10 field width and two decimal places.
Use switch statement for selection of x values.

*/

#include <iostream>
#include <iomanip> //needed for setprecision and setw
#include <cmath> // needed for solving advanced math stuff; fabs (used on floating type numbers) and sqrt on this case 
#include <conio.h>

using namespace std;

int main()

{
	int x, y;
	float V;
	const float z = 2.5; // constant declaration for z

	cout << "Enter value for x: ";	cin >> x; // allows for integer value of x be entered from keyboard
	cout << "Enter value for y: ";	cin >> y; // allows for integer value of y be entered from keyboard
	
	switch (x) // switch statement for selection of x values 1 and 2
	{
		case 1: // x value 1
			if (1 < y < 5)
				{
					V = x * y * z; // condition 1: V = xyz when x = 1 and 1 < y < 5
				}
			else if (y >= 5)
				{
					V = x + (y / z); // condition 2: V = x + y/z when x = 1 and y >= 5
				}
			break;
			
		case 2: // x value 2
			if (y <= 5)
				{
					V = fabs((x - y) / z); // condition 3: V = |(x - y)/z| when x = 2 and y <= 5
				}
			else if (y > 5)
				{
					V = x - (sqrt(y + z)); // condition 4: V = x - sqrt of [y + z] when x = 2 and y > 5
				}
			break;
			
		default:
			V = x + y + z; // condition 5: V = x + y + z for other values of x and y
			break;
	}
	
	cout << "\nThe value for V is\n" << setw(10) << fixed << setprecision(2) << V; // outputs V with 10 field width and two decimal places
	
	_getch();
	return 0;
}
