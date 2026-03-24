//WAP  TO FIND THE SUM AND AVG OF THE ARRAY ELEMENT
#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("enter thye no of element u want to ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++){
        sum=sum+a[i];

    }printf("enter the su of the array is:%d",sum);
    float avg=sum/n;
    printf("avg of the array is:%f",avg);
    return 0;
}