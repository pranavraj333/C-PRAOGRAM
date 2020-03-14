/* C Program to generate Fibonacci Series */

#include<stdio.h>

void main()

    {
        int i, n, a=0, b=1, Next_Term;
        
        printf("Enter the number of terms:");
        scanf("%d", &n);
        
        printf("Fibonacci Series:\n");
        
        for (i=1; i<=n; i++ )
            
            {
                printf("%d",a);
                Next_Term = a + b;
                a=b;
                b=Next_Term;
            }
    }