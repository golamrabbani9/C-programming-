#include<stdio.h>
int main()
{
    int arr[100]={2,2,7,9,7,9,3,9};
    int count=0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        printf("frequency of %d is %d \n",arr[i],count);
        count=0;
    }
    return 0;
}
