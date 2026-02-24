//WAP TO CHECK
#include <stdio.h>
int main()
{
    float a,b,c;
   
    printf("enter the three sides\n");
    scanf("%f %f %f", &a, &b, &c);
    
    if (a==b==c)
    {
        printf("the triangle is equilateral");
    }
    else if (a==b || b==c|| a==c)
    {
        printf("the triangle is iso\n");
    }
    else
    {
        printf("the triangle is scalar\n");
    }
    if ( a*a==(b*b)+(c*c) ||  (b*b)==a*a+(c*c) ||c*c==(b*b)+a*a )
    {
        printf("the triangle is valid");
    }
    else
    {
        printf("the triangle is invalid");
    }
    return 0;
}