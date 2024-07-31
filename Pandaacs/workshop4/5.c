#include <stdio.h>
 int main ()
 {
    float a,b,BMI ;
    scanf("%f ",&a);
    scanf("%f ",&b);
    BMI = a/(b*b);
    if (BMI < 18.5)
    {
        printf ("You are underweight.\n");
    }
    else if (BMI < 25.0 && BMI >= 18.5)
    {
        printf ("You are normal weight.\n");
    }
   else if (BMI < 30 && BMI >= 25.0)
    {
        printf("You are overweight.\n");
    }
    else 
    {
        printf ("You are obese.\n");
 } 
 return 0;
 }