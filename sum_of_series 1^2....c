/******************************************************************************
        C Program to find out the Sum of Series 1^2 + 2^2 + .... + n^2
*******************************************************************************/
#include <stdio.h>

void main()

    {
        int n, i, sum=0;
        
        printf("Enter a Max value number in the series :");
        scanf("%d",&n);
        
        sum=(n*(n-1)*(2*n+1))/6;
        
        printf("sum of the series :");
        
        for(i=0; i<=n; i++);
            {
                if(i != n)
                printf("%d^2",i);
                
                else
                printf("%d^2 = %d", i, sum);
            
            }
    }