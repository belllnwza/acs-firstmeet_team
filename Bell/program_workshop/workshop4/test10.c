#include <stdio.h>
int main ()
{
    int n = 0 , i = 1 ,sum ,j ;
    printf("%d %d ",n,i) ;
    for ( j=0 ; j<8 ; j++)
    {
        sum = n+i ;
        printf("%d ",sum) ;
        n = i ;
        i = sum ;
    }
    return 0 ;
}