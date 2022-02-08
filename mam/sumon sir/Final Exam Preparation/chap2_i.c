#include<stdio.h>
#include<conio.h>
void sp_to_dash(char *str);
int main(){
    sp_to_dash("this is a test GR");
    return 0;
}
void sp_to_dash(char *str){
    while(*str){
        if(*str==' '){
            printf("%c",'-');
        }
        else{
            printf("%c",*str);
        }
        str++;
    }


}
