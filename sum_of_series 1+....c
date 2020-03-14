/******************************************************************************
    C Program to Find the Sum of Series 1 + 1/2 + 1/3 + 1/4 + .... + 1/n 
*******************************************************************************/
#include <stdio.h>

void main()

    {
        int num, i, sum=0;
        
        printf("Enter a Number :");
        scanf("%d", &num);
        
        printf("1+");
        
        for(i=0; i<=num-1; i++)
            {
                printf("1/%d +",i);
                
                sum = sum + i;
            }
            
        printf("1/%d \n", num);
        printf("sum=1/%d \n",sum+1/num);
    }