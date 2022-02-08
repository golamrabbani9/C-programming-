#include<stdio.h>

//Sum Function
void sum(int a,int b){
    printf("The Sum is: %d\n",a+b);
}
//subtraction
void sub(int a,int b){

    printf("Subtraction :%d\n",a-b);
}
//squre
void sqr(int a){
    printf("The Squre of %d is %d\n",a,a*a);
}
//Area of Triangle
void triangle(double base,double hight){
    printf("The Area of Given Triangle is %.2lf\n",.5*base*hight);


}
//pass array to function
void display(int arr[]){
    int i;
    for(i=0;i<=7;i++){
        printf("%d  ",arr[i]);
    }
}
//recursion
void fact(int n){
    if(n==1)
        return 1;
    else
        return n * fact(n-1);


}
//main function
int main()
{
    int a[8]={2 ,4,5,2,5,21,4, 5};
    sum(10,20);
    sub(20,10);
    sqr(10);
    triangle(10,10);
    display(a);
    fact(4);
}
