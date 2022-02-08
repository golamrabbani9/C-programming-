#include<stdio.h>
void f(void);
int main()
{
    int i;
    for(i=0;i<10;i++){
        f();
    }
}
void f(void){
    int j;
    printf("%d\n",j);
    j++;


}
