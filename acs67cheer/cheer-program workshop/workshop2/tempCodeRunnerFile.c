#include <stdio.h>
int main ()
{
    int choice;
    float width,height,area=0,base,radius ;
    printf ("1. Rectangle\n") ;
    printf ("2. Triangle\n") ;
    printf ("3. Circle\n") ;
    printf ("Enter your choice: ") ;
    scanf (" %d",&choice) ;
if (choice==1)
{
    printf ("Enter the width: ") ;
    scanf (" %f",&width) ;
    printf ("Enter the height: ") ;
    scanf (" %f",&height) ;
    area = width*height ;
    if (width<0 && height<0)
    {
        printf ("The area of the rectangle is: Error") ;
    }
    else if (area<0)
    {
        printf ("The area of the rectangle is: Error") ;
    }
    else
    {
        printf ("The area of the rectangle is: %.2f",area) ;
    }
}
else if (choice==2)
{
   printf ("Enter the base: ") ;
   scanf (" %f",&base) ;
   printf ("Enter the height: ") ;
   scanf (" %f",&height) ;
   area=0.5*base*height ;
   if (base<0 && height<0)
   {
    printf ("The area of the triangle is: Errorr") ;
   }
   else if (area<0)
   {
    printf ("The area of the triangle is: Errorr") ;
   }
   else 
   {
    printf ("The area of the triangle is: %.2f",area) ;
   }
}
else if (choice==3)
{
   printf ("Enter the radius: ") ;
   scanf (" %f",&radius) ;
   area=3.14*radius*radius ;
   if (radius<0)
   {
   printf ("The area of the circle is: Error") ;
   }
   else
   {
   printf ("The area of the circle is: %.2f",area) ;
   }
}
else 
{
    printf ("invalid choice") ;
}
    return 0 ;
}