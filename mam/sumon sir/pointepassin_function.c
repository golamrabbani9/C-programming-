#include<stdio.h>
double getAvg(int *arr,int size);
int main()
{
    int a[5]={2,4};
    double average=getAvg(a,3);
    printf("average=%f: ",average);
    return 0;
}
double getAvg(int *arr,int size){
    int i;

    double avg;
    int sum=0;
    for(i=0;i<size;i++){
        sum=sum+arr[i];
    }
    avg=(double)sum/size;
    return avg;
}
