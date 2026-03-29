//WRITE THE PROGRAM TO ENTER THE PRICES OF 3 ARTICLES AND PRINT THERE FINAL PRICE WITH GST INCLUDED IN IT 
#include<stdio.h>
int main(){
    float price[3];
    

    printf("enter the price of the first article:\n");
    scanf("%f",&price[0]);
    printf("enter the price of the second article:\n");

    scanf("%f",&price[1]);
    printf("enter the price of the third article:\n");
    scanf("%f",&price[2]);
    
    //NOW PRINT THE PRICE WITH GST
    printf("the final price of the article 1:%f \n",price[0]+(0.18*price[0]));
    printf("the final price of the article 2:%f \n",price[1]+(0.18*price[1]));
    printf("the final price of the article 3:%f \n",price[2]+(0.18*price[2]));

} 