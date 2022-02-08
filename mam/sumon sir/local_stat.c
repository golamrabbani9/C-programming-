#include<stdio.h>
void fun1();
int main()
{
    fun1();
    fun1();
    fun1();

    return 0;
}
void fun1(){
    int a=1;
    static b=100;
    printf("%d\n",a);
    printf("%d\n",b);
    a++;
    b++;


}
//what is the difference static and local variable?
//call by referrence and call by value
//overiq.com follow korte hobe
//geeksforgeeks
//cstutorialpoint
