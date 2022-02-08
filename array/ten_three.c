#include<stdio.h>
int main(){
    int i,a[100],sum=0;
    int avg;
    int n;

    printf("Enter the numbers: ");
    scanf("%d",&n);


    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    ;
    printf("sum=%d\n",sum);
    printf("\nAvarage= %f",(float) sum/n);


    return 0;
}
