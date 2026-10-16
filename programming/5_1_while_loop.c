/*
Program to demonstrate the use of a while loop. It will keep a running total of
numbers entered by the user
*/

#include <stdio.h>

int main()
{
    float num = 1; // initalise variables, //changing one to zero, it will run but it will skip the while loop because num = 0
    float total = 0;


    // while the number entered is not equal to zero
    while (num != 0) // while the number entered is not equal to zero, semi-colon is mandatory, if num was 1 then this is false, we need it to be true
    {
        printf("\nEnter a number (enter 0 to end program)\n");
        scanf("%f", & num); // prompt so user can input their value, in python : int(input("enter number")) Without this the loop will run forever

        /* Add the number entered to the current value in total. This is the new total
        */
        total = total + num;

    } // end while

    // Display the final total
    printf("\nThe final total is %.1f", total);

    return 0;

} // end main()

/* 
Key difference since checking the while at the beginning of the loop, the code must run once. In a regular while loop, there is NO guarantee the statements will execute once.
However, a do .. while loop DOES guarantee to execute the statements at least once
*/