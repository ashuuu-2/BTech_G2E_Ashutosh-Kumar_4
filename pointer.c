/*BASIC OF THE PONTER :
THE POINTER IS THE MEMORY LOCATION WHICH IS USED TO STORE THE MEMORY ADDRES OF ANOTHEER VARIABLE */
#include<stdio.h>
int main(){
    int age=2;
    int *ptr=&age;
    int _age=*ptr;

    // RETURN THE ADDRESS OF THE VARIABE

    printf("%u \n",&_age);
    printf("%p\n",&age);
    printf("%u\n",&age);
    printf("%u\n",&(*ptr));
    printf("%u\n",&ptr);

    //YOU WANT U GET THE VALUES AT THE MEMORY LOCATION:
    printf("%d \n",age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));
    return 0;
     
}