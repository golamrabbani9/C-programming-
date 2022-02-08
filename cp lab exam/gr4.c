#include<stdio.h>
int main()
{
    int n;

    printf("Write the nth term:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d ",fibonacci(i));
    }

}
int fibonacci(int x){
    if(x==0){
        return 0;

    }
    else if(x==1){
        return 1;
    }
    else{
        return fibonacci(x-1)+fibonacci(x-2);
    }



}
