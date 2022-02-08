#include<stdio.h>
int main(){
    int i,n,sum=0;
    int a[100];

    printf("How many numbers:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("sum =%d",sum);







    getch();
}
