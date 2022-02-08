#include<iostream>
using namespace std;

int main(){
    int i,n,sum=0;
    cout<<"Input a number of terms:"<<endl;
    cin>>n;
    cout<<"The natural numbers upto "<< n <<"th terms are:"<<endl;
    for(i=1;i<=n;i++){
        cout<<" "<<i;;
        sum=sum+i;
    }
    cout<<endl<<"The sum of the natural numbers is:"<<sum;

    return 0;
}
