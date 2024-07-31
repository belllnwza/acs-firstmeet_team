#include <stdio.h>
int main ()
{
 int a,b,c,d ;
 a = 0 ;
 b = 1 ;
 printf ("%d %d ",a,b);
 for (c=0 ; c<8 ; c++)
 {
    d=a+b ; 
    printf ("%d ",d);
    a=b ;
    b=d ;
 }
 return 0;
}