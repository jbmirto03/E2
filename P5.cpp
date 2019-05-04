/*
PROBLEM 5: 
Create a program that will “count” numbers, separated by commas, up to 10. 
When it reaches 10, count by 2s until you reach 30. 
See the sample output below:
Counting…
1,2,3,4,5,6,7,8,9,10,12,14,16,18,20,22,24,26,28,30
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int x;
	
	cout << "Counting..." << endl;	

	for (x = 1; x < 10; x++) //this goes to say that x must be less than 10 while 1 is "loopingly" added to number x via x++ (so only counts until 9)
	
		{
			cout << x << ",";
		}
	
	for (x = 10; x >= 10, x <= 30; x+=2) // starts from 10 as declared in x = 10; can never surpass 30, but must be greater than 10; x+=2 translates to x = x + 2, 2 is "loopingly" added to the number x
	
		{
			cout << x << ",";
		}
		
	cout << "\b "; // \b removes the last comma and replaces it with a space " "
	
	_getch();
	return 0;
}
