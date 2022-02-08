#include<stdio.h>
int main(){
    int n,i;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++){
        if(n%i==0)
            printf("%2d ",i);

    }
    printf("%d",n);


    return 0;
}
