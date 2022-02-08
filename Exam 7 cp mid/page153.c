#include<stdio.h>
#include<string.h>

void print_upper(char *string){
    register int i;
    for(i=0;i<string[i];i++){
        string[i]=toupper(string[i]);
        putchar(string[i]);
    }



}

int main(void)
{
    char s[50];
    printf("Enter a string: ");
    gets(s);
    print_upper(s);
    printf("\n%s",s);

    return 0;
}
