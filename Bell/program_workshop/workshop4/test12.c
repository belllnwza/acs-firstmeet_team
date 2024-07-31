#include <stdio.h>
int main ()
{
    int n = 1,sum = 0,i = 0 ;
    while (i < 10)
    {
        scanf("%d",&n) ;
        if (n > 0) 
        {
            sum = n+sum ;
        }
        else 
        {
            sum = n+sum ;
            break ;
        }
        i = i+1 ;
    }
    printf("%d",sum) ;
    return 0 ;
}