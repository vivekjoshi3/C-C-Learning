//array count using c++
#include<iostream>
using namespace std;


int add(int arr[], int n){
    int total = 0;
 //sum all the values inside the array
    for(int i=0 ; i<=n ;i++){
        total = total+arr[i];
    }
    return total;
}
int main(){

    int size;
    
    cout<<"Enter the size of the array : "<<endl;
    cin>>size;

    int arr[size];

   
    for(int i=0 ; i<=(size-1) ; i++){
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>arr[i];

    }

   int sum = add(arr,size-1);

   cout<<"Total of the sum is : "<<sum<<endl;

    return 0;
}