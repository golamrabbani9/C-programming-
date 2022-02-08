#include<stdio.h>
long long int fact(int i){
    if(i<=0){
        return 1;
    }
    return i*fact(i-1);

}
int main()
{
    int n;
    printf("Enter the factorial number: ");
    scanf("%d",&n);
    printf("the factorial of %d is %d",n,fact(n));

    return 0;
}
