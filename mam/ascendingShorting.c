#include<stdio.h>
int main()
{
    int arr[50];
    int n,i,j,temp;
    printf("How many number: ");
    scanf("%d",&n);
    printf("Input numbers: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }
    //printing number ascending order
    printf("The ascending order: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
