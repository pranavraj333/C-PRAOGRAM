/******************************************************************************
                 C Program to Find the Sum of First n Natural Numbers
*******************************************************************************/
#include <stdio.h>

void main()

    {
        int i, n, sum=0;
        
        printf("Enter natural number :");
        scanf("%d",&n);
        
        for(i=1; i<=n; i++)
            {
                sum = sum+i;
                printf("%d \n",i);
            }
        
        printf("The sum is %d \n", sum);    
    }
    
    
