#include<stdio.h>
int main()
{
    int i,j,num;

    printf("enter a positive number: ");
    scanf("%d",&num);
    printf("\n");

    for(i=num;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}

