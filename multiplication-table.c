/******************************************************************************
             C Program to Find & Display Multiplication Table
*******************************************************************************/
#include <stdio.h>

void main()

    {
        int num, i;
        
        printf("Enter the numbers");
        scanf("%d", &num);
        
        printf("Multiplication Table of %d : \n",num);
        
        for(i=1; i<=10; i++)
            {
                printf(" %d", num*i);
            }
    }
 