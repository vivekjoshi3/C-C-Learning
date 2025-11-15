#include<iostream>
using namespace std;

int count_distinct(int arr[] , int n){

    int count = 0; //counter the distinct elements

    for(int i=0;i<n ; i++){
        bool isDistinct = true; //Assume the current element is different
    
        //checking whether the elements on the left side are correct or not
        for(int j=i-1 ; j>=0 ; j--){
            if(arr[i] == arr[j]){
                //if a duplicate is found then do not count them
                isDistinct = false;
                break;
            }
        }
        if(isDistinct){
            count++;
        }
    }

    return count;
}

int main(){

    int n;
    cin >> n; // Input the size of the array

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input the elements of the array
    }

    // Call the function and output the result
    cout << count_distinct(arr, n);
    return 0;
}