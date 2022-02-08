#include<stdio.h>
int main()
{
    int *ptr;
    int a=78;
    ptr=&a;
    printf("value of pointer: %d\n",*ptr);
    printf("value by a: %d\n",a);
    printf("address of p:%d\n",&ptr);
    printf("Adrees of a :%d\n",ptr);
    printf("Address of a by variable:%d",&a);
    return 0;
}
