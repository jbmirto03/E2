/* 

PROBLEM 1: 

An Internet service provider has 3 different subscription packages for its customers:

Package A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr.
Package B: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr.
Package C: For P1995/mo of unlimited access is provided.

Write a program that calculates a customer’s monthly bill. 
It should ask which package the customer has purchased and how many hours were used. 
It should then display the total amount due. 

*/

#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()

{
    string P; //subscription package
    float H; //# of hours consumed
    float C; //cost or price

    cout << "Good day, customer!\n\nWhich package have you purchased? ";
    cin >> P;

   	if ((P == "A") || (P == "B") || (P == "C") || (P == "a") || (P == "b") || (P == "c")) //so it accepts both upper and lowercase characters
	
		{
        	cout << "How many hours have been used? ";
        	cin >> H;

       		
	        // code for SP-A
	  		if (P == "A" || P == "a")
				{        			
					C = 995 + (H - 10) * 20; //formula for subscription package A where base price (995) is added to additional hours (# hrs consumed - 10 base hrs provided) multiplied to 20 (cost per additional hour)
    	        }

	        // code for SP-B
    	    else if (P == "B" || P == "b") 
				{					
					C = 1495 + (H - 20) * 10; //formula for subscription package A where base price (995) is added to additional hours (# hrs consumed - 10 base hrs provided) multiplied to 10 (cost per additional hour)
                }

	        // code for SP-C
    	    else
				{					
            	    C = 1995;            	    
            	}
    
			cout << "\nTotal amount due: P" << C << endl;
    	} 
	
	else
		{
     	   cout << "\nInvalid package!" << endl; //displays when A, B, C aren't selected
   		}

    _getch();
    return 0;
}
