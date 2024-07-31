#include <stdio.h>
int main ()
{
    float r,b,h ;
    int n ;
    printf("1. Rectangle\n2. Triangle\n3. Circle\n") ;
    printf("Enter your choice: ") ;
    scanf("%d",&n) ;
    
    if (n == 1)
    {
        printf("Enter the width: ") ;
        scanf("%f",&b) ;
        printf("Enter the height: ") ;
        scanf("%f",&h) ;
        if (b<0 || h<0)
        {
            printf("The area of the rectangle is: Error") ;
        }
        else 
        {
            printf("The area of the rectangle is: %.2f",b*h) ;
        }
    }

    else if (n == 2)
    {
        printf("Enter the base: ") ;
        scanf("%f",&b) ;
        printf("Enter the height: ") ;
        scanf("%f",&h) ;
        if (b<0 || h<0)
        {
            printf("The area of the triangle is: Error") ;
        }
        else 
        {
            printf("The area of the triangle is: %.2f",0.5*b*h) ;
        }
    }

    else if (n == 3)
    {
        printf("Enter the radius: ") ;
        scanf("%f",&r) ;
        if (r<0) 
        {
            printf("The area of the circle is: Error") ;
        }
        else
        {
            printf("The area of the circle is: %.2f",3.14*r*r) ;
        }
    }

    else
    {
        printf("Invalid choice") ;
    }
    return 0 ;
}