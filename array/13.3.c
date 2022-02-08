#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
    char txt[100];
    printf("Enter Your Name: ");
    gets(txt);

    int l=strlen(txt);

    for(int i;i<l;i++){
        printf("%c ",txt[i]);
    }


    getch();
}
