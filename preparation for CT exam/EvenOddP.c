#include<stdio.h>
#include<math.h>

int main(){
    int n,i,sum=0;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2){
        printf("%d\n",i);
        sum=sum+i;


    }
    printf("sum=%d",sum);


   // for(i=1;i<=n;i=i+2){
    //    printf("%d\n",i);
   // }



    return 0;
}
