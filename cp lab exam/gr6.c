#include<stdio.h>
int main()
{
    check(9);
    checkeven(0);
    return 0;
}
int check(int num){
    int i,count=0;
    for(i=2;i<num;i++){
        if(num%i==0){
            count++;
            break;
        }
    }
    if(count==0){
        printf("prime");
    }
    else{
        printf("not prime");
    }


}
int checkeven(int num){
    if(num%2==0){
        printf("\nEven");
    }
    else{
        printf("\nOdd");
    }


}
