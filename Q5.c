//Q5: Write a program to convert temperature from Celsius to Fahrenheit and vice versa.             

#include <stdio.h>
int main()      
{
    float c,f;
    printf("Enter temperature in Celsius:\n");
    scanf("%f", &c);
    f=(c*9/5)+32;
    printf("Temperature in Fahrenheit=%.2f\n", f);

    printf("Enter temperature in Fahrenheit:\n");
    scanf("%f", &f);
    c=(f-32)*5/9;
    printf("Temperature in Celsius=%.2f\n", c);
    return 0;
}
