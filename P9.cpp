/* 

PROBLEM 9: 

Create a program that will draw a box using “*” characters given its dimensions in rows and columns. 
See the sample outputs below:

How many rows: 6
How many columns: 8
********
********
********
********
********
********
How many rows: 5
How many columns: 12
************
************
************
************
************

*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int r, c; //r = rows, c = columns
	bool coaster = false; //loop condition
    
    do 
	{
		cout << "How many rows: ";		cin >> r;
    	cout << "How many columns: ";	cin >> c;
    	
    	//Here lies
		//input conditions
    	
    	/*if (r < 0 || c < 0)
    	
			{
				cout << "Invalid input! \n\n"; //This is the error message shown when the above conditions aren't met.
				break; //Responsible for ending the program when invalid/negative integer values are entered.
			}
			
		//Here dies
		//input conditions
			
		else*/
		
			{
   		 		for (int a = 0; a < r; a++) //conditions for drawing rows
    				{
   		 				cout << "\n*";
 					  		for (int b = 1; b < c; b++) //conditions for drawing columns, if set to 0, columns will always render with an additional one; therefore it is set to 1 because 0 rows = 1 column? Tbh ms. hindi ko po masyado macomprehend why this happens pero I've experimented sa values gumagana naman HAHAHA
    							{
    								cout << "*";
								}
					}
			}
		
		cout << "\n\n";
		
	} while (!coaster); //loop condition
    
    _getch();
    return 0;
}
