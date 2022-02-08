#include<stdio.h>
#include<conio.h>
int main(){
    int i,n,a[100];



    //clrscr();
    printf("How many NUmbers do you print: ");
    scanf("%d",&n);

    printf("Enter the Numbers: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("You ENtered: ");
    for(i=0;i<n;i++){
        printf("%4d ",a[i]);
    }



    getch();
}
