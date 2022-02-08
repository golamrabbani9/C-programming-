#include<stdio.h>
#include<string.h>
int main()
{
    char s1[80];
    char s2[80];
    gets(s1);
    gets(s2);
    if(strcmp(s1,s2)){
        printf("return 1");
    }
    else{
        printf("return 0");
    }
    return 0;
}
