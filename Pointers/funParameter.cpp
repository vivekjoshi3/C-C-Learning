#include<iostream>
using namespace std;

void update(int *p){
    *p = *p+5;
}

int main(){

    int x=10;
    update(&x);
    cout<<x;

    return 0;
}