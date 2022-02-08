#include<stdio.h>

int main(){
    int i,n,array[100],num;

    //get the user size
    printf("How many Numbers :");
    scanf("%d",&n);

    //input array values
    printf("Enter the value: ");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    //print the array
    for(i=0;i<n;i++){
        printf("%d\n",array[i]);
    }

    int found=0;

    //input searching value
    printf("\nEnter your searching Value: ");
    scanf("%d",&num);


    //check the number
    for(i=0;i<n;i++){
        if(array[i]==num){
            printf("Numbers Found index is %d",i);
            exit(0);
        }
    }
    printf("Not Found");





    getch();
}
