#include<stdio.h>
#include <math.h>
int main() 
{
    float P,R,T;
    float ST,CI;

    printf("enter principal,rate,time");
    scanf("%f%f%f",&P,&R,&T);
     =(P*R*T)/100;
    CI=P*pow((1+R/100),T)-P;

    printf("simple interest=%.2f\n",SI);
    scanf("comound interest=%.2f\n",CI);

    return 
}


















