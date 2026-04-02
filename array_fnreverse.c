//WRITE A FUNCTION TO REVERSE AN ARRAY
#include<stdio.h>
void reverse(int arr[],int n);
void printarray(int arr[], int n);
int main(){
    int arr[]={1,2,3,4,5,6};
    reverse(arr,6);
    printarray(arr,6);
    return 0;

}
void reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int first=arr[i];
        int second=arr[n-1-i];
        arr[i]=second;
        arr[n-1-i]=first;
    }

}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d \t",arr[i]);

    }
}