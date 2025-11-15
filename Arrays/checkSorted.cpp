#include<iostream>
using namespace std;

bool sorted(int arr[] , int size){

    //traverse the number from 1 to n 
    for(int i=1 ; i<size ; i++){
        if(arr[i] < arr[i-1]){
            return false;
        }

    }
    return true;

}

int main(){

    int n;
    cin>>n;
    bool ans;


    int arr[n];

    cout<<"Please enter the values for the array : ";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    ans = sorted(arr,n);

    if(ans==false){
        cout<<"Not Sorted ";
    }else
        cout<<"Sorted";




    return 0;
}