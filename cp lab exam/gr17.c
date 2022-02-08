#include<stdio.h>
int main()
{
    int fact,i,mul=1;
    printf("Enter the number: ");
    scanf("%d",&fact);

    for(i=1;i<=fact;i++){
        mul=mul*i;
    }
    printf("The factorial %d: ",mul);
    return 0;
}
