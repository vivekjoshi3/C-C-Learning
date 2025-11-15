//define the elements inside the array
/* DEFINING THE STEPS FOR THE ARRAYS
1. define the size of the array
2. declare the array
3. input the array using the for loop
3. output the array using the for loop
4. print it using the for loop

*/
#include<iostream>
using namespace std;
int main(){

    //define the size of the array
    int size;

    //input the size
    cout<<"Enter the size of the array : "<<endl;
    cin>>size;

    //define the array;
    int arr[size];

    //input the array
    for(int i=0 ; i<=size ; i++){
        cout<<"Enter the element "<<i<<" : ";
        cin>>arr[i];
    }

    //output the array values
    for(int i=0 ;i<=size ; i++){
        cout<<arr[i]<<" ";
    }

return 0;

}