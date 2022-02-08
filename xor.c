#include<stdio.h>
//int xor(int a,int b);
int main(){
    printf("%d",xor(67,0));



    return 0;
}
int xor(int a,int b){

    return (a||b) && !(a && b);

}
