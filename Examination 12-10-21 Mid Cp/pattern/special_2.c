#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='B')){
        printf("Alphabet");
    }
    else if(ch>='0' && ch<='9'){
        printf("Digit");
    }
    else{
        printf("special Charecter");
    }
    return 0;
}
