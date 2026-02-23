#include<stdio.h>// deciding the day by using switch statement 
int main()
{
    char day;
    printf("print the day :");
    scanf("%s",&day);
    switch(day){
        case 'm' :printf("print monday");
        break;
        case ('t') :printf("print tuesday");
        break;
        case ('w') :printf("print wednesday");
        break;
        case ('th') :printf("print thurday");
        break;
        case ('fri') :printf("print friday");
        break;
        case ('sat') : printf("print saturday");
        break;
        case ('sun') :printf("print sunday");
        break;
        default:printf("invalid ");

        return 0;
    }     
        
        
        
        

    }