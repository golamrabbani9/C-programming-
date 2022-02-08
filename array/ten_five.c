#include<stdio.h>
int main(){
    int i,n,a[100];
    int min=a[0];

    printf("Enter how many numbers: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]<min)
            a[i]=min;

    }
    printf("Minimum=%d",min);

    getch();
}
