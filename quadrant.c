/******************************************************************************
       C Program to Read a Coordinate Point and Determine its Quadrant
*******************************************************************************/
#include <stdio.h>

void main()

    {
        int num1, num2;
        
        printf("Enter two numbers :");
        scanf("%d%d",&num1, &num2);
        
        if(num1>0 && num2>0)
            printf("1st Quadrant");
        
        else if(num1<0 && num2>0)
            printf("2nd Quadrant");
            
        else if(num1<0 && num2<0)
            printf("3rd Quadrant");
            
        else if(num1>0 && num2<0)
            printf("4th Quadrant");
            
        else
            printf("Origin");
    }
