#include<stdio.h>
int main(){
    char txt[100];
    int l,i;

    printf("Enter Your Name: ");
    gets("txt");

    l=strlen(txt);
    for(i=l-1;i>=0;i--){
        printf("%c ",txt[i]);
    }
    getch();
}
