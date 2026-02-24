//WAP TO DISPLAY NO OF DAYS OF A MONTH.
#include <stdio.h>
int main()
{
    int day;
    printf("enter the month:");
    scanf("%d", &day);

    switch(day)
    {
        case 1: printf("no of days are 31");
        break;
        case 2: printf("no of days is 28 of 29");
        break;
        case 3: printf("no of days are 31");
        break;
        case 4: printf("no of days are 30");
        break;
        case 5: printf("no of days are 31");
        break;
        case 6: printf("no of days are 30");
        break;
        case 7: printf("no of days are 31");
        break;
        case 8: printf("no of days are 31");
        break;
        case 9: printf("no of days are 30");
        break;
        case 10: printf("no of days are 31");
        break;
        case 11: printf("no of days are 30");
        break;
        case 12: printf("no of days are 31");
        break;
        default: printf("the month no is invalid");
    }
    return 0;
}