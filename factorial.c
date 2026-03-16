//WAP TO WRIITE THE FACTORIAL OF A NUMBER 
#include<stdio.h>
int main(){
    int n,fac=1;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        fac=fac*i;}
    printf("factoria of the number is:%d \n",fac);

    
    return 0;

    
}