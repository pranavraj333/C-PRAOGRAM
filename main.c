/******************************************************************************
          C Program to find First n Fibonacci Numbers
*******************************************************************************/

#include<stdio.h>

void main()

    {
        int f1=0, f2=1, f3, num, count=0;
        
        printf("Enter the value of Number:");
        scanf("%d", &num);
        
        printf("first %d fibonacci number are \n",num);
        printf("%d \n", f1);
        printf("%d \n", f2);
        
        for(count=1 ;count<num ;count++)
        
            {
                f3 = f1 + f2;
                printf("%d \n",f3);
                f1 = f2;
                f2 = f3;
            }
    }