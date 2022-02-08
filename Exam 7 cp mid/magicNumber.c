#include<stdio.h>
#include<stdlib.h>
int main()
{
    int guess;
    printf("Enter a Number: \n");
    scanf("%d",&guess);
    int magic=rand();
    printf("%d\n",magic);
    if(magic>guess)
        printf("You Won");
    else
        printf("You Lost");
    return 0;
}
