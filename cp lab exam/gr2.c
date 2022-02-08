#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two numbers:\n");
    scanf("%d %d",&x,&y);

    result(&x,&y);
    return 0;
}
int result(int *p,int *q){
    int x=*p,y=*q;
    if(x>y){
        printf("maximum %d",x);
    }
    else{
        printf("maximum %d",y);
    }


}
