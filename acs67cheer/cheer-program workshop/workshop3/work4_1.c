#include <stdio.h>
int main ()
{
    int a,b,c ;
    scanf ("%d",&a);
    for (b=1;b<=12;b++)
    {
        c=a*b;
        printf ("%d * %d = %d\n",a,b,c);
    }
    return 0 ;
}