#include <stdio.h>
int main () 
{
    int n[5],sum = 0 ,i;
    for (i=0 ; i<5 ; i++)
    {
        scanf ("%d", &n[i]) ;
    }
    for (i=0 ; i<5 ; i++)
    {
        sum = sum + n[i] ;
    }
    printf("Sum of entered numbers: %d\n",sum) ;
    printf("Numbers in array: ") ;
    for (i=0 ; i<5 ; i++)
    {
        printf("%d ",n[i]) ;
    }
    return 0 ;
}