//WAP TO FIND IF A NO IS ARMSTRONG NO
#include <stdio.h>
int main()
{
    int a,b,c;
    
    printf(" enter the nos\n");
    scanf("%d %d %d", &a ,&b ,&c);
    int abc= a*100+b*10+c;
    
    abc==(a*a*a)+(b*b*b)+(c*c*c)?printf("the number is armstrong"):printf("number is not armstong");
    return 0;
    
}