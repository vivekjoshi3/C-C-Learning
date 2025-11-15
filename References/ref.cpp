#include<iostream>
using namespace std;

int main(){

    int x=10;
    int &y = x;
    cout<<y<<' '; //Print the value of y(10 because the value of x is 10 and the address of y is stored in x)

    x+=5;
    cout<<y<<' '; //the value will be 15;

    y+=5; //Modify 5
    cout << x << ' '; //Print value of 'x' (10 because of 'y' modified 'x')
    
    return 0;
}