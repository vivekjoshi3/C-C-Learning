#include<iostream>
using namespace std;

int main(){

    int size,total=0;
    cin >> size;

    int arr[size];

    for(int i=0 ;i<size ; i++){
        cin>>arr[i];
    }

    int positiveCount =0;
    for(int i=0 ;i<size ; i++){
        
        if(arr[i]>0){
            
                //total = total+arr[i];
                total +=arr[i];
                positiveCount++;
        }
        
    }

    cout<<total/positiveCount;

    return 0;
}