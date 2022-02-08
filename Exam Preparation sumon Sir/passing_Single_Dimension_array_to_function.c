#include<stdio.h>
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("array[%d]=%d\n",i,arr[i]);
    }


}

int main()
{
    int y[10]={1,2,4,5};
    return 0;
    display(y,5);
}

