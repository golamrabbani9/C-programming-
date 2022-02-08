//#include<stdio.h>
//#include<string.h>

int main(){
    char txt[100];
    int i,l;
    printf("Enter Your Name: ");
    gets(txt);

    l=strlen(txt);

    for(i=0;i<l;i++){
        printf("%c=%d\n",txt[i],txt[i]);
    }


    getch();
}
