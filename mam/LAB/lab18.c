#include<stdio.h>
int main()
{
    char s[50];
    gets(s);
    int l=strlen(s);
    for (int j=l;j>=0;j--){
        printf("%c",s[j]);
    }

    return 0;
}
