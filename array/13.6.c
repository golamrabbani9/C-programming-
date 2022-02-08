//#include<stdio.h>
int main(){
    char txt[100];
    int l,i;
    int upper=0;

    printf("Enter a string: ");
    gets(txt);

    for(i=0;i<l;i++){
        if(txt[i]>='A' && txt[i]<='Z'){
            upper++;
        }
    }
    printf("%d",upper);

    getch();
}
