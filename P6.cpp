/*

PROBLEM 6: 
The Fibonacci sequence is a sequence which starts with 0 and 1,
with subsequent numbers of the sequence (called Fibonacci numbers) being the sum of the previous two.
Thus, the first few terms of the sequence are: 0,1,1,2,3,5,8,…
Create a program that will output the NEXT 20 Fibonacci numbers (after 0 and 1) in one line, separated by commas.

See the sample output below:
Fibonacci numbers:
0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946

*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int n1 = 0, n2 = 1, n3, n4 = 2, n5 = 2 + 20; //n1 = first number in fibonacci seq (0), n2 = second no. in fibonacci seq (1), n3 = defined below, n4 = renders first two numbers from fibonacci seq, n5 = the first two fibonacci numbers + the remaining 20

    cout << "Fibonacci numbers:\n";
	cout << n1 << "," << n2 << ",";
	
    for (n4; n4 < n5; n4++) //this goes to say that n4 must be less than n5 while 1 is "loopingly" added to n4 via n4++
    
    	{
        	n3 = n1 + n2;
        	n1 = n2; //new declared value for n1, so the next iteration would read n3 as n3 = n2 + n3
        	n2 = n3; //new declared value for n2, so the next iteration would read n3 as n3 = n2 + n3
			cout << n3 << ",";
    	}
		
	cout << "\b";
	cout << " ";
	
	_getch();
	return 0;
}
