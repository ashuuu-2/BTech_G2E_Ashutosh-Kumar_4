#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("if number is 2 digit then 1 otherwise 0 \n %d",n>9 && n<100);
    return 0;
    

}