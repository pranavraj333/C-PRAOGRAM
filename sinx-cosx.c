/******************************************************************************
             C Program to Calculate the value of sin(x) & cos(x)
*******************************************************************************/

#include<stdio.h>
#include<math.h>

void main()

    {
        float angle;
        
        printf("Enter the ange :");
        scanf("%f", &angle);
        printf("sin(%f)=%f cos(%f)=%f", angle, sin(angle*3.141/180), angle, cos(angle*3.141/180));
    }