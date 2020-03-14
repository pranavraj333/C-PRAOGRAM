/******************************************************************************
             C Program to Print the Factorial pf a given number
*******************************************************************************/
#include <stdio.h>
void main()
{
    int i, fact = 1, num;
 
    printf("Enter the number \n");
    scanf("%d", &num);
    
    /*shows ERROR if the user enters a negative number*/
    
    if (num < 0)
        printf("ERROR!");
    else
    {
        for (i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
        printf("Factorial of %d = %d", num, fact);
    }
}