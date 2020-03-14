/******************************************************************************
C Program to Display Floyd's Triangle
*******************************************************************************/
#include <stdio.h>

void main()
    {
        int num, i, j, k=1;
        
        printf("Enter number of rows :");
        scanf("%d", &num);
        
        for (i = 1; i <= num; i++)
            {
                for (j = 1; j <= i; j++)
                    {
                        printf("%d ",k);
                        k++;
                    }
                printf("\n");
            }
    }
