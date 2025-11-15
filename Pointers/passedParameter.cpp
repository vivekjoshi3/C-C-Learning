#include<iostream>
using namespace std;

void update(int *p){
    *p = 20;

}

int main(){

    int x=10;
    cout<<"First value is : "<<x<<endl;
    update(&x);
    cout<<"Second value is :"<<x;

    return 0;
}