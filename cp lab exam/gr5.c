#include<stdio.h>
int main()
{
    int n,i,arr[100];
    printf("How many number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nlargest number: %d",arr[n-1]);
    return 0;
}
void bubbleSort(int arr[],int n){
    int temp,i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }

        }
    }

}
