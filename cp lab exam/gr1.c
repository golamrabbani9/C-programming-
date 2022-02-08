#include<stdio.h>
#include<string.h>
int main()
{
    int length;
    char str1[100];
    char str2[100];
    //gets(str1);
    gets(str2);
    strcpy(str1,str2);
    puts(str1);
    length=strlen(str1);
    printf("Length: %d\n",length);
    strrev(str1);
    puts(str1);

    return 0;
}
