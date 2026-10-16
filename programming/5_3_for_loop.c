/*
Program to demonstrate the use of a for loop. It will display a set of numbers 1 - 10
*/

#include <stdio.h>

int main()
{
    // an index variable
 	int i = 0;

    
 	// Display the numbers 1 - 10
 	for(i = 1; i < 11; i++) //The semi-colon to seperate the items
	//[i = 1] only done the first time when gone into the loop, refers to line 10 

	//[i < 11] is the condition to stop counter, get to said number then stop and print.

	//[i++] is the counter
 	{
   	    // Display the contents of the variable i
   		printf("%d\n", i); //scanf is missing because it checks line 14. The [i++] is what would have been in scanf
 	}
    
 	return 0;

} // end main ()

// How to display the the odd numbers 1,3,5,7,9?  [i = 1 + 2] or [i += 2]
// How to display 10 to 1? start count down at 10. [i = 10, i > 0, i--2]