//in this code we will check how we use the nesting of the member functions that means calling one function from another function 
//to get the output
#include<iostream>
using namespace std;

class set{
    int m,n; //by default these are the private variables
    public:
        int largest(void);      //from this data we will try to print the data which is largest or not
        void acceptData(void);  //this will accept all the possible data which is present 
        void printData(void);   //this will print the accepted data and which is  largest.
};

int set :: largest(void){
    if( m >=n)
        return m;
    else
        return n;
}

void set :: acceptData(){
    cout<<"Enter the value of m "<<endl;
    cin>>m;

    cout<<"Enter the value of n "<<endl;
    cin>>n;
}

void set :: printData(){
   cout<<"Lagest Number : "<<largest()<<endl;

}

int main()
{   
    set s;
    s.acceptData();
    s.printData();
    return 0;
}