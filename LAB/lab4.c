#include<stdio.h>
int main()
{
    int n1,n2,n3,n4;
    printf("Enter Four Numbers: ");
    scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
    n1>n2 && n1>n3 && n1>n4 ? printf("the largest number: %d",n1) :
         n2>n1 && n2>n3 && n2>n4 ? printf("the largest number:%d",n2) :

              n3>n1 && n3>n2 && n3>n4 ? printf("the largest number: %d",n3) :
                  printf("the largest number: %d",n4);
    return 0;
}
