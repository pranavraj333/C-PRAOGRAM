/* C Program to simulate a simple calculator */

#include<stdio.h>

void main()

    {
        char operator;
        float num1, num2;
        
        printf("Enter a operator:");     /* operators are +,-,*,/ */
        scanf("%c", &operator);
        printf("Enter 2 numbers:");
        scanf("%f%f", &num1, &num2);
        
        switch(operator)
            
            {
                case '+' :
                printf("%f + %f =%f", num1, num2, num1+num2);
                break;
                
                case '-' :
                printf("%f - %f =%f", num1, num2, num1-num2);
                break;
                
                case '*' :
                printf("%f * %f =%f", num1, num2, num1*num2);
                break;
                
                case '/' :
                printf("%f / %f =%f", num1, num2, num1/num2);
                break;
                
                default :
                printf("ERROR");
                break;
            }
    }