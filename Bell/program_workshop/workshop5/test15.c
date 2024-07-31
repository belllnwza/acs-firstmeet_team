#include <stdio.h>
int main () 
{
    int m = 10e9,M = -10e9,i,n[10] ;
    for (i=0 ; i<10 ; i++)
    {
        scanf("%d",&n[i]) ;
    }
    for (i=0 ; i<10 ; i++)
    {
        if (n[i] > M)
        {
            M = n[i];
        }
        if (n[i] < m)
        {
            m = n[i] ;
        }
    }
    printf("Maximum number: %d\n",M) ;
    printf("Minimum number: %d",m) ;
    return 0 ;
}