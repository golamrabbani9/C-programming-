#include<stdio.h>
int main(){
    int i,n,arr[10];
    printf("How many numbers :");
    scanf("%d ",&n);

    for(i=0;i<n;i++){
        scanf("%d",arr[i]);
    }


    for(i=0;i<n;i++){
        printf("arr[%d] is %d\n",i,i);

    }





    return 0;
}
