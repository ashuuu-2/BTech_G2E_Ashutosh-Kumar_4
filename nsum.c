/*(a) WAP TO TO PRINT THE SUM OF N NATURAL NUMBER AND n IS GIVEN BY USER 
(b)ALSO WAP TO PRINT THE NUMBERS ENTERED IN REVERSE ORDER*/

#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("enetr the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("the sum is %d \n",sum);


    for(int i =n;i>=1;i--){
        printf(" %d \n",i);
    }
    return 0;

}