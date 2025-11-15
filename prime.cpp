#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number ";
    cin>>n;

    if(n==0 && n==1){
        cout<<" 1 and 0 are neither prime nor composite ";
    }

    for(int i=2 ; i<n ; i++){

        if(i%2!=0){
            cout<<i<<" ";
        }
    }

    return 0;
}
