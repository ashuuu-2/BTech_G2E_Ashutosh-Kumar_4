#include<stdio.h>
void table ();
int main()
{   printf("printing the table of the given number:\n");
    table();
    return 0;}

void table(){
    int n;
    printf("enter the number of which u want to print table:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d \n",i*n);}
    }
