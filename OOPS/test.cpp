#include<iostream>
using namespace std;

class item{
    int number;
    float cost;
    public:
    void getData(int a, float b);
    void setData(void){
        cout<<"Number : "<<number<<endl;
        cout<<"Cost :"<<cost<<endl;
    }

};

void item :: getData(int a , float b){
    number = a;
    cost = b;
}

int main()
{

    item x;
    x.getData(100,299.90);
    x.setData();
    return 0;
}