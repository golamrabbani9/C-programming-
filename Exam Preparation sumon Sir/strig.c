#include<stdio.h>
int main()
{
    int i;
    char str[5][10];
    for(i=0;i<5;++i){
        gets(str[i]);
       // scanf("%s",str[i]);
    }
    printf("You Have Entered: ");
    for(i=0;i<5;i++){
        puts(str[i]);
    }

    return 0;
}
