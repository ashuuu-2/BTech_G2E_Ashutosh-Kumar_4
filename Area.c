#include<stdio.h>
int main()
{
    int radius;
    printf("enter the radius of the cicle:");
    scanf("%d",&radius);
    float pi = 3.14;

    float area=pi*radius*radius;
    printf("the area of the circle is:%f",area);
    return 0;



}