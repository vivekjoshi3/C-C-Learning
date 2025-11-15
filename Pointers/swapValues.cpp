//this code will swap the values using the pointers
#include<iostream>
using namespace std;

//declare the function which will swap the values
void swap(int &a , int &b){
    //declare the temp variable which will help the value to swap
    int temp = a;
    a = b;
    b=temp;

}

int main(){
    int x , y;

    cout<<"Enter the 2 values which you need to swap "<<endl;
    cin>>x>>y;

    swap(x,y);

    cout<<x<<"  "<<y<<endl;


    return 0;
}