#include <stdio.h>
int main ()
{
    int n[10],i,j,count=0,c=0,a=0 ;
    for (i=0 ; i<10 ; i++) 
    {
        scanf("%d",&n[i]) ;
    }
    for (i=0 ; i<10 ; i++)
    {
        for (j=0 ; j<10 ; j++)
        {
            if (n[i] == n[j])
            {
                count++ ;
            }
        }
        if (count > c)
        {
            c = count ;
            a = i ;
        }
        count = 0;
    }
    printf("Mode = %d",n[a]) ;
}