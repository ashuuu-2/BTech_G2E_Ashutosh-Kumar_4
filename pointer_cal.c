//WRITE THE PROGRAM TO CALCULATE THE THE SUM , PRODUCT AND AVERAGE OF THE TWO NUMBERS.PRINT AVERAGE IN THE MAIN BODY
#include<stdio.h>
void calc(int x, int y,int*sum,int*prod,int*avg);
int main(){
    int x=5;
    int y=7;
    int sum,prod,avg;
    calc(x,y,&sum,&prod,&avg);
    printf("sum:%d , prod:%d , avg:%d \n", sum,prod,avg);
    return 0;
}
void calc(int x,int y,int*sum,int*prod,int*avg){
    *sum=x+y;
    *prod=x*y;
    *avg=(x+y)/2;
    

}