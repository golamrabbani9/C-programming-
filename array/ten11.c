#include<stdio.h>
int main(){
    int array[]={52,7,23,64,64}
    int size=5;

    for(int i=0;i<size-1;i++){
        if(array[i]>array[i+1])
            array[i]=array[i+1];
    }



    getch();
}
