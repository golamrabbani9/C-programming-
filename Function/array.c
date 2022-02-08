#include<stdio.h>
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]!=0)
            printf("array[%d] is %d and address is %d\n",i,arr[i],&arr[i]);
    }


}

int main()
{
    int a[5];
    printf("Enter the array value: ");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    display(a,5);

    return 0;
}
