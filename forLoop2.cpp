#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(n%i!=0){
            cout<<"prime number"<<endl;
        }
        else
      cout<<"not prime number"<<endl;



    }





    return 0;
}
