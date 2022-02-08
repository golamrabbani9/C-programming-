#include<stdio.h>
int main()
{
    int arr[100];
    int n;
    printf("How many numbers");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("Maximum value %d",max);
    return 0;
}
