/* 

PROBLEM 8: Create a program that will generate the multiplication table (up to x10) of a number. See the sample output below:
Enter a number: 6
Multiplication table of 6:
1 * 6 = 6
2 * 6 = 12
3 * 6 = 18
4 * 6 = 24
5 * 6 = 30
6 * 6 = 36
7 * 6 = 42
8 * 6 = 48
9 * 6 = 54
10 * 6 = 60 

*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int n1, n2 = 1; //n2 = 1 because the table begins with 1 multiplied to the desired number
	
	cout << "Enter a number: ";	cin >> n1;
    cout << "Multiplication table of " << n1 << ":" << endl;
    
    for (n2; n2 <= 10; n2++) //this goes to say that n2 cannot pass the number 10 while 1 is "loopingly" added to it via n2++
		{
        	cout << n1 << " * " << n2 << " = " << n2 * n1 << endl; //n2 values are multiplied to n1, the number inputted via cin
    	}
    	
	_getch();
	return 0;
}
