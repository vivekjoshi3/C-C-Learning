#include<iostream>
#include<string>

using namespace std;

/*
1. C++ was initially called with c with classes by Strostroup
2. class--> This is just the extension of structures
3. structures had limtations --> members are public --> you cannot add methods.
4. Classes  = structures + more
5. Classes --> can have properties and methods.
6. Classes --> can make few members as private and public
7. structures in c++ are typedef.
8. You can declare objects along with the class declaration.
9. 
*/

/*
        NESTING OF MEMBER FUNCTIONS
1.  

*/

//declare the class
// class Employee{

// }harry, rohan , lovish;
//harry.salary = 8 then this does not make sense if the salary is private

class binary{
    private:
        string s;
        void chk_bin(void);
    public:
        void read(void); //this does not take anything
        
        void ones_compliment(void);
        void display();
};

void binary :: read(void){
        cout<<"Enter a binary number "<<endl;
        cin>>s;
         
}
void binary :: chk_bin(void){

    for(int i=0 ; i<s.length(); i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format "<<endl;
            exit(0);
        }
    }
}

//find the one's complement for the number
void binary ::  ones_compliment(void){

    chk_bin();
    for(int i=0 ; i<s.length(); i++){

        //if the value is 0 then we should replace that by 1 and if it is 1 then replace that with 0
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else {
            s.at(i)='0';
        }

    }

}

void binary :: display(void){
    cout<<"Displaying the binary number "<<endl;

    for(int i=0 ; i<s.length(); i++){
        cout<<s.at(i);
    }
    cout<<endl;
}
int main(){

//declare the class
binary b;
b.read();
//b.chk_bin(); //if the function declaration is private here you cannot access the function from outside inside the main function
/*
for eg - if the void chk_bin() is declared under the private section
then it cannot be accessed in main as b. chk_bin()
but if that is written in the public way then it can be accessed.

*/
b.display();
b.ones_compliment();
b.display();


    return 0;
}