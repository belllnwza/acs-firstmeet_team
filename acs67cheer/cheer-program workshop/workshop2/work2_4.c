#include <stdio.h>
int main ()
{
    float a,b,BMI ;
    scanf ("%f",&a) ;
    scanf ("%f",&b) ;
    BMI = a/(b*b) ;
    if (BMI < 18.5)
    {
    printf("Your BMI is %.2f",BMI) ;
    printf("\nYou are underweight.") ;
    }
    if (BMI < 25.0 && BMI >= 18.5)
    {
        printf("Your BMI is %.2f",BMI) ;
        printf("\nYou are normal weight.") ;
    }
    if (BMI < 30 && BMI >= 25.0)
    {
        printf ("Your BMI is %.2f",BMI) ;
        printf ("\nYou are overweight.") ;
    }
    if (BMI > 30)
    {
        printf("YOur BMI is %.2f",BMI) ;
        printf("\nYou are obese.") ;
    }
    return 0 ;
}