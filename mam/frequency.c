#include<stdio.h>
int main()
{
    int arr[50]={2,2,5,6,2,5};

    int i,j,count=0;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            if(arr[i]==arr[j]){
                count++;

            }

        }

        printf("the frequency of %d is %d\n",arr[i],count);





        count=0;
    }
    return 0;
}
