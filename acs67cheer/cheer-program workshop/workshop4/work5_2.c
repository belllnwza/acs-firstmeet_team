#include <stdio.h>
int main ()
{
    int arr[10],i,max,min ;
    for (i=0;i<10;i++)
    {
        scanf ("%d",&arr[i]) ;
    }
    max = arr[0] ;
    min = arr[0] ;
    for (i=0;i<10;i++)
    {
        if (arr[i] > max)
        {
             max = arr[i] ; 
        }
        else if (arr[i]<min)
        {
            min = arr[i] ;
        }
    }
        printf ("Maximum number: %d\n",max) ;
        printf ("Minimum number: %d",min) ;
    return 0 ;
}

