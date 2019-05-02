/* 

PROBLEM 7: 

Create a program that will generate the sum of all whole numbers starting from 1 up to a given number. 
For example, given an input of 5, the summation is 1+2+3+4+5 = 15. 
Continue asking for input and calculating until the user enters 0 or a negative number. 

See the sample outputs below:
	
Enter a number: 6
The sum of all whole numbers from 1 to 6 is 21.
Enter a number: 8
The sum of all whole numbers from 1 to 8 is 36.
Enter a number: 5
The sum of all whole numbers from 1 to 5 is 15.
Enter a number: 12
The sum of all whole numbers from 1 to 12 is 78.
Enter a number: 15
The sum of all whole numbers from 1 to 15 is 120.
Enter a number: 0
Thank you!

*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	bool coaster = false; //loop condition
	
	do 
	{	
		int n1, n3 = 0; //declared inside the do-while loop so the values would reset along w/ the rest of the code inside
	
		cout << "Enter a number: ";	cin >> n1;
		
		if	(n1 > 0)
			{
				for (int n2 = 1; n2 <= n1; n2++) //goes to say that it would never surpass the number inputted to n1
					{
        				n3 += n2; //this goes to say that n3 = n3 + n2
    				}
    		
    			cout << "The sum of all whole numbers from 1 to " << n1 << " is " << n3 << "." << endl;
    		}
			
		else // if < 0, displays Thank you! message
    		{
    			cout << "Thank you!" << endl;
    			break;
			}
    	
	} while (!coaster); //loop condition
	
	_getch();
	return 0;
}
