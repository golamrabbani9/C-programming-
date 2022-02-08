//#include<stdio.h>
int main(){
    char st1[100],st2[200];

    printf("Enter first string:");
    gets(st1);
    printf("Enter second string:");
    gets(st2);

   int n=strcmpi(st1,st2);
   int l=strlwr(st2);
   int u=strupr(st1);


    printf("\nAfter concatenation strcat(st1,str2)\n\n ");
    printf("%d \n\n",n);
    printf("%s \n%s\n",l,u);

    getch();
}
