//WRITE A PROGRAM TO SWAP TO THE TWO NUMBER
#include<stdio.h>
void swap(int x,int y);
void _swap(int *x,int *y);
int main(){
    int a=5;
    int b=6;
    swap(a,b);
    printf("a:%d , b:%d \n",a,b);
    _swap(&a,&b);
    printf("a:%d,b:%d \n",a,b);
    return 0;

}
void swap(int x,int y){
    int t = x;
    x=y;
    y=t;
    printf("the swapped value of x:%d\n",x);
    printf("the swapped value of y is:%d\n",y);
}
void _swap(int*x,int*y){
    int t=*x;
    *x=*y;
    *y=t;
    printf("x:%d,y:%d \n",*x,*y);

}