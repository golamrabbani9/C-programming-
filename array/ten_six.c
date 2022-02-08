#include<stdio.h>

//this function will print the array
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]!=0)
            printf("array[%d]=%d\n",i,arr[i]);
    }


}

//this function will insert a value in any index
int indInsertation(int arr[],int size,int element,int cap,int index){
    if(size<=index)
        return "you entered worng index";

    else{
        for(int i=size-1;i>=index;i--){
            arr[i+1]=arr[i];
        }
    arr[index]=element;
    size++;
    }
}

//this function will delete any value from any index.
int deletaion(int arr[],int size,int index){
    for(int i=index;i<=size-1;i++){
            arr[i]=arr[i+1];

    }
    size=size-1;

}
//search a number in array
int search(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            printf("Your Target Value %d is located index array[%d]\n",target,i);

        }

        }
    for(int i=0;i<n;i++){

        if(arr[i]!=target)
            printf("Number not found");
            break;
    }


    }




//main Function
int main(){
    int a[12]={4,6,1,6,5,1,42,4,5};
    int size=9;

    display(a,10);
    deletaion(a,9,3);
    display(a,12);


    indInsertation(a,9,45,10,9);
    display(a,10);
    search(a,size,4
           );


    return 0;
}
