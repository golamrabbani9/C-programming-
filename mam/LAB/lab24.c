#include<stdio.h>
int main()
{
    char s[50];
    printf("Enter a string:");
    gets(s);
    int l=strlen(s);
    for (int i=l;i>=0;i--){
        printf("%c\t",s[i]);
    }
    return 0;
}

