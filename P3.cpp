/*

PROBLEM 3: The value of V depends on the values of x and y as follows:

V = xyz when x = 1 and 1 < y < 5
V = x + y/z when x = 1 and y >= 5
V = |(x . y)/z| when x = 2 and y <= 5
V = x-ã..+.. when x = 2 and y > 5
V = x + y + z for other values of x and y

Write a C++ program that accepts two integers x and y from the kbd. Let z = 2.5.
Use a constant declaration for z and output V with 10 field width and two decimal places.
Use switch statement for selection of x values.

*/

#include <iostream>
#include <iomanip> //needed for setprecision and setw
#include <cmath> //needed for solving advanced math stuff, abs and sqrt on this case 
#include <conio.h>

using namespace std;

int main()

{
	int x, y;
	float V;
	const float z = 2.5; //constant value for z

	cout << "Enter value for x: ";	cin >> x; //allows for integer value of x be entered from keyboard
	cout << "Enter value for y: ";	cin >> y; //allows for integer value of y be entered from keyboard
	
	if (x == 1 && 1 < y < 5) //condition 1: V = xyz when x = 1 and 1 < y < 5
		{
			V = x * y * z;
			cout << "\nThe value for V is\n" << setw(10) << setprecision(2) << V;
		}
		
	else if (x == 1 && y >= 5) //condition 2: V = x + y/z when x = 1 and y >= 5

		{
			V = x + (y / z);
			cout << "\nThe value for V is\n" << setw(10) << setprecision(2) << V;
		}
		
	else if (x == 2 && y <= 5) //condition 3: V = |(x . y)/z| when x = 2 and y <= 5
		{
			V = abs((x - y) / z);
			cout << "\nThe value for V is\n" << setw(10) << setprecision(2) << V;
		}
		
	else if (x == 2 && y > 5) //condition 4: V = x-ã..+.. when x = 2 and y > 5
		{
			V = x - (sqrt(y + z));
			cout << "\nThe value for V is\n" << setw(10) << setprecision(2) << V;
		}
		
	else //condition 5: V = x + y + z for other values of x and y
		{
			V = x + y + z;
			cout << "\nThe value for V is\n" << setw(10) << setprecision(2) << V;
		}
	
	_getch();
	return 0;
}
