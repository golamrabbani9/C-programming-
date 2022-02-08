#include<stdio.h>
int main(){
    int x[100];//int type array nilam x name e. jar moddhe 0 index to 99 porjonto variable store korte parbo

    int i;

    for(i=0;i<100;i++){
        x[i]=i;
    }
    int y=x[4]+x[2];
    printf("%d",y);
    for(i=0;i<100;i++){
        printf("%d\n",x[i]);
    }


    //int total_byte=sizeof(int)*100;
    //printf("%d",total_byte);




    for(i=0;i<100;i++){
    printf("%d\n",&x[i]);
    }





}
