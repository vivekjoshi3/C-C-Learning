#include<iostream>
using namespace std;

class Employee{
        int id;
        static int count;
        /*
        --when we want to include one single count across whole program then we need to ensure that we use static int count whose initial value is 
        0 at the start.
        --if you remove static then you need to initialise the value for int count = 0; <- in this way
        --also you need to create an reference to the class and call it
        
        */
        public:
        void setData(void){
            cout<<"Enter the id ";
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The id of the employee is : "<<id<<" and this is the employee number"<<count<<endl;
        }

        //create a static function
        static void getCount(void){
                cout<<"The value of count is "<<count<<endl;
        }
};

int Employee :: count=1000; //if you wanna change the value of count from any number you can initalise the value to count like this
//int Employee :: count = 1000;
int main()
{
    Employee harry, vivek , abhi;
    //count is the static data member of the class Employee
    // harry.id = 1;
    // harry.count =1; cannot do this becasue both of the variables are private.
    harry.setData();
    harry.getData();
    Employee :: getCount();


    vivek.setData();
    vivek.getData();
    Employee :: getCount();

    abhi.setData();
    abhi.getData();
    Employee ::getCount();

    return 0;
}