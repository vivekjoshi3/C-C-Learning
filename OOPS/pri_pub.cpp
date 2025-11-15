#include<iostream>
using namespace std;

class Employee{

    private:
         int a , b ,c;
    
    public:
        int d , e;

    void setData(int a1 , int b1 , int c1);
    void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};

void Employee :: setData(int a1 , int b1 , int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
    Employee e;
    e.d=23; //before accesing due to any value it will throw the garbage value
    e.e=44; // same goes with this one as well.
    e.setData(10,20,30);
    e.getData();

    return 0;
}