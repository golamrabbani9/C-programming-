#include<stdio.h>
int main()
{
    int arr[100]={33,73,1,54,2,5,1,55,32,54,23};
    int i,j,temp,sum=0;
    for(i=0;i<11;i++){
        for(j=0;j<11-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<11;i++){
        printf("%d ",arr[i]);
    }
    printf("\nSum: ");
    for(i=0;i<11;i++){
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}
