#include<stdio.h>
int main(){
    char txt[100];

    printf("Enter Your Name: ");
    gets(txt);
    puts(txt);
    printf("The length of this string %d",strlen(txt));
}
