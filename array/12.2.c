#include<stdio.h>
#include<string.h>
int main(){
    char txt[100];
    printf("Enter String: ");
    gets(txt);
    int l=strrev(txt);
    printf("%s",l);

   char c= getch();
   printf("%c",c);
}
