#include<iostream>
#include<string>

using namespace std;

//declare the class
class Teacher{

    
private:
    double salary;
public:

    string name;
    string dept;
    string subject;
    Teacher(string n, string d , string s , double sal){
    dept = "Computer Science ";
        cout<<"Hi I am constructor! "<<endl;
    }
    //declare the method
void changeDept(string newDept){
        dept = newDept;
    }
void setSalary(double newSal){
    salary = newSal;
}

double getSalary(){
    return salary;
}
};

class Account{
    private:
        string accID;
        string username;
        double balance; 
        string password;
};
int main()
{
    Teacher t1;
    t1.name="Vivekanand Joshi";
    t1.subject = "C++";
    t1.setSalary(25000);
    cout<<t1.getSalary()<<endl;
    cout<<t1.dept<<endl;
    return 0;
}