#include<stdio.h>
int main(){
    char txt[100];
    int i,l;

    printf("Enter a line string: ");
    gets(txt);

     l=strlen(txt);
    for(i=0;i<l;i++){
        if(txt[i]>='a' && txt[i]<='z'){
            printf("%c",txt[i]-32);
        }
        else{
            printf("%c",txt[i]);
        }
    }

    getch();
}
