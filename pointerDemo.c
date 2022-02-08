#include<stdio.h>
int main(){
    int x=5;
    int *p;
    p=&x;

//can we put the address of a variable with another data type in pointer?
    printf("The address of p is %d\n",p);
    printf("The address of p is %d\n",*p);
    printf("The address of p is %d\n",&



           .p);



    printf("The address of x is %d\n",&x);






    return 0;
}
