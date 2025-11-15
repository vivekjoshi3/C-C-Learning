//define the average of an array
#include<iostream>
using namespace std;

int avg (int arr[], int n){

    int total=0;
    

    for(int i=0 ; i<=(n-1); i++){
        total = (total+arr[i])/n;
    }
    return total;
}

int main(){

    int size;
    
    //define the size of the array

    cout<<"Enter the size of the array ; "<<endl;
    cin>>size;

    int arr[size]; //

    cout<<"Enter the size of the elements ";
    for(int i=0 ; i<=(size-1) ; i++){
        cout<<"Enter the element : "<<i<<" ";
        cin>>arr[i];
    }

    int sum = avg(arr,size -1); 

    cout<<"Average of the array is : "<<sum;

    return 0;
}