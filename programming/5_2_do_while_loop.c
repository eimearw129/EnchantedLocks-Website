/*
Program to demonstrate the use of a do .. while loop.
It will keep a running total of numbers entered by the user
*/

#include <stdio.h>

int main()
{
    float num = 1; // if this was = to 0, it wont skip the while, the do will need to run code at least once 
 	float total = 0;

    
 	// the do block will execute at least once
 	do // do not use the semi-colon here, checking while
 	{
   		printf("\nEnter a number (enter 0 to end program)\n");
   		scanf("%f", & num);
                
   		// if the user enteres zero
   		if (num == 0)
   		{
            printf("\nBye bye");
            break;
            
   		} // end if

   		//Add the number entered to the current value in total. This is the new total
   		total = total + num;

 	} // end do
 	while (num != 0); 

    // Display the final total
 	printf("\nThe final total is %.1f", total);
        
 	return 0;
    
} // end main ()


/* 
Key difference since checking the while at the beginning of the loop, the code must run once. In a regular while loop, there is NO guarantee the statements will execute once.
However, a do .. while loop DOES guarantee to execute the statements at least once
*/