#include<stdio.h>
int main(){
    int marks[2][3];
    printf("enter the marks student:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&marks[i][j]);

            
        }
    }
    //PRINT MAKRS OF THE FIRST STUDENT:
    printf("the marks of the student 1:\n");
    for(int i=0;i<1;i++){
        for(int j=0;j<3;j++){
            printf("subjetct %d :%d\n",j+1,marks[i][j]);

        }
    }
    return 0;

}