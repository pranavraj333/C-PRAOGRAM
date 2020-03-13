/* C Program to find out the Roots of a Quadratic Equation */

#include <stdio.h>
#include<math.h>

void main()

    {
	    float a, b, c, d, root1, root2, i;
	
	    printf("\n Please Enter values of a, b, c of Quadratic Equation :  ");
  	    scanf("%f%f%f", &a, &b, &c);
  	
  	    d = (b * b) - (4 * a *c);
  	
  	    if(d > 0)
  	        {
  		        root1 = (-b + sqrt(d) / (2 * a));
  		        root2 = (-b - sqrt(d) / (2 * a));
  		
	        	printf("\n root1 = %.2f and root2 = %.2f", root1, root2);
  	        }
  	        
  	    else if(d == 0)
  	        {
  		        root1 = root2 = -b / (2 * a);
  		
  		        printf("\n root1 = %.2f and root2 = %.2f", root1, root2);
  	        }
  	        
  	    else if(d < 0)
  	        {
  		        root1 = root2 = -b / (2 * a);
  		        i = sqrt(-d) / (2 * a);
  		
  		        printf("\n root1 = %.2f+%.2f and root2 = %.2f-%.2f", root1, i, root2, i);
        	}
  	
    }
