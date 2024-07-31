#include   <stdio.h>
int main ()
{
    int a[5],b,sum=0;
    for (b=0;b<5;b++)
    {
        scanf ("%d",&a[b]) ;
        sum=sum+a[b];
    }
   printf("Sum of entered numbers: %d\n",sum) ;
   printf("Numbers in array:") ;
    for (b=0;b<5;b++)
    {
        printf (" %d",a[b]) ;
    }
    return 0 ;
}