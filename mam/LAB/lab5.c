#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an character :");
    scanf("%c",&ch);
    if(((ch  >='a') && (ch <='z')) || ((ch >= 'A') && (ch <= 'Z'))){
        printf("You have entered an alphabet %c",ch);
    }
    else if(ch >= '0' && ch <= '9'){
        printf("You entered a digit %c",ch);
    }
    else{
        printf("you entered special character %c",ch);
    }
    return 0;
}
