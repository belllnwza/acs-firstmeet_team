#include <stdio.h>
int main ()
{
    int a ;
    scanf("%d" ,&a);
    if (a >= 80) 
    {
        printf("Grade :A") ;
    }
    else if (a >= 75 && a < 80) 
    {
        printf("Grade :B+") ;
    }
   else if (a >= 70 && a < 75) 
    {
        printf("Grade :B") ;
    }
    else if (a >= 65 && a < 70) 
    {
        printf("Grade :C+") ;
    }
    else if (a >= 60 && a < 65) 
    {
        printf("Grade :C") ;
    }
    else if (a >= 55 && a < 60) 
    {
        printf("Grade :D+") ;
    }
     else if (a >= 50 && a < 55) 
    {
        printf("Grade :D") ;
    }
     else if (a < 50) 
    {
        printf("Grade :F") ;
    }

    return 0 ;
}