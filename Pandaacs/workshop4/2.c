#include<stdio.h>
 int main ()
 {
    int a,b,c,d ;
    a=0;
    b=1;
    for (c=0 ; c<10 ; c++)
{
    d=a+b ;
    printf ("%d ",a);
    a=b ;
    b=d ;
    }
   return 0 ;
 }