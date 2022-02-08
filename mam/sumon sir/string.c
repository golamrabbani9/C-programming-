#include<stdio.h>
#include<string.h>
int main()
{
    char name[14];
    gets(name);
    int s=strlen(name);
    printf("%d",s);
    return 0;
}
