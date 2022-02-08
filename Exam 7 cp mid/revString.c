#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter a String for Reverse: ");
    gets(str);
    int len=strlen(str);
    printf("The Reverse string: ");
    for(int i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }

    return 0;
}
