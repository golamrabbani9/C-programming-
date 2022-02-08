#include<stdio.h>
int main(){
    int x[100];
    int *p,*q;
    p=&x;
    /*
    for(int i;i<=100;i++){
        x[i]=i;
        printf("%d ",i);


    } */
    for(int i=0;i<=100  ;i++){
        printf("%d ",*p+i);
    }
   printf("%d ",*p+1);


    return 0;
}
