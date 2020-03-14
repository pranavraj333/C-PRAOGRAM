/******************************************************************************
C Program to Find the Sum of the Series 1/1! + 2/2! + 3/3! + .... + 1/n!
*******************************************************************************/
#include <stdio.h>

void main()

    {
        int i, j, num, f, sum=0;
        
        printf("Enter a max value number :");
        scanf("%d",&num);
        
        for(i=1; i<=num; i++)
            {
                if(i != num)
                printf("1/%d!+",i);
                
                else
                printf("1/%d!=",i);
                
                f=1;
                for(j=1; j<=i; j++)
                    {
                        f=f*j;
                    }
                
                sum=sum+(1.0)/f;
                
            }
        
        printf("%d",sum);
        
    }