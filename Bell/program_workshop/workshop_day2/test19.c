#include <stdio.h>
int main ()
{
    int n[3][3],i,j ;
    int max;
    for (i=0 ;i<3 ; i++)
    {
        for (j=0 ; j<3 ;j++)
        {
            scanf("%d",&n[i][j]) ;
        }
    }
    max = n[0][0] ;
    for (i=0 ; i<3 ; i++)
    {
        for (j=0 ; j<3 ; j++)
        {
            if (n[i][j] > max)
            {
                max = n[i][j] ;
            }
        }
    }
    printf("The maximum value in the matrix is: %d",max) ;
    return 0 ;
}