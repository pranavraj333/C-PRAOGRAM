/* C Program to calculate the Simple Interest */

#include<stdio.h>

void main()

    {
        float principle, time, rate, SI;
        
        printf("enter principle amount:");
        scanf("%f",&principle);
        printf("enter time:");
        scanf("%f",&time);
        printf("enter rate:");
        scanf("%f",&rate);
        
        SI=(principle*time*rate)/100;
        
        printf("the Simple Interest=%f",SI);
    }