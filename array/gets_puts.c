#include<stdio.h>
#include<string.h>

int main()
{
    /*char name[30];
    printf("Enter name: ");
    gets(name);     //ইউজার থেকে স্ট্রিং গ্রহণের ফাংশন
    printf("Name: ");
    puts(name);
    printf("The length of name %d ",strlen(name));   //স্ট্রিং প্রদর্শনীর ফাংশন*/
   char ch1[10] = {'h', 'e', 'l', 'l', 'o', '\0'};
   char ch2[10] = {'s', 'a', 't', 't',  '\0'};
    int x=strcat(ch1,ch2);
   printf("The value of first string is: %s",x);


    return 0;
}

