//WAP TO CHECK IF A CHARACTER IS A VOWEL OR CONSONANT
#include<stdio.h>
int main()
{
    char ch;
   
    
    printf("enter the character:%c",ch);
    scanf("%c",&ch);
    
    if (ch ==  'a'|| ch=='A'|| ch=='e'|| ch=='E'|| ch=='i' ||ch=='I' ||ch=='u'|| ch=='U'|| ch=='o'||ch=='O') {
        printf("entered character is vowel %c");

    }
    
    else {
        printf("charecter is consonant");
    }
    return 0;
}