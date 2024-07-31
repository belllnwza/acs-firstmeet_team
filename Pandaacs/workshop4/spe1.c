#include<stdio.h>
int main()
{
    int choice; 
    float w ,h,a ;
    printf("1. Rectangle\n");
    printf("2. Triangle\n");
    printf("3. Circle\n");
    printf("Enter your choice:");
    scanf("%d",&choice) ;
    if (choice == 1)
    {
        printf("Enter the width:");
        scanf("%f",&w);
        printf("Enter the height:");
        scanf("%f",&h);
       a= w*h;
        if(w<0 || h<0)
        {
            printf("The area of the rectangle is:Error");
        }
        else 
        {
            printf("The area of the rectangle is:%.2f")
        }
    }

return 0 ;
}
