/******************************************************************************

       C Program to Find the Perimeter of Circle, Rectangle and Triangle

*******************************************************************************/
#include <stdio.h>
#include <math.h>

void main()

    {
        float radius, length, width, a, b, c, height, perimeter;
        int n;
        
        /* Perimeter of Rectangle */
        printf(" Perimeter of Rectangle \n");
        printf("Enter width and length of the rectangle : \n");
        scanf("%f%f", &width, &length);
        
        perimeter = 2 * (width + length);
        
        printf("Perimeter of rectangle is : %.3f \n", perimeter);
        
        
        /* Perimeter of Circle */
        printf(" Perimeter of Circle \n");
        printf("Enter the radius of the circle : \n");
        scanf("%f", &radius);
        
        perimeter = 2 * 3.14 * radius;
        
        printf("Perimeter of circle is : %.3f", perimeter);
        
        
        /* Perimeter of Triangle */
        printf(" Perimeter of Triangle \n");
        printf("Enter the size of all sides of the triangle : \n");
        scanf("%f%f%f", &a, &b, &c);
        
        perimeter = a + b + c;
        
        printf("Perimeter of triangle is : %.3f \n", perimeter);
        
    }
