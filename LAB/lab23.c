#include<stdio.h>
int main()
{
    char s[50];
    printf("Enter a string:");
    gets(s);
    for (int i=0;i<=strlen(s);i++){
        printf("%c\t",s[i]);
    }
    return 0;
}
