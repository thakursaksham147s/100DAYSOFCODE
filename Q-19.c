//Q-19 Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
int main()  
{
    int a, b, c;
    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a==b && b==c)
        printf("The triangle is Equilateral\n");
    else if(a==b || b==c || a==c)
        printf("The triangle is Isosceles\n");
    else
        printf("The triangle is Scalene\n");
    return 0;
}
