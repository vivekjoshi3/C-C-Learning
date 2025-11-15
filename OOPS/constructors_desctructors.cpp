#include<iostream>
using namespace std;

//declare the class
class Point{

    private:
        int x, y;

    public:
        Point(){
            x =0;
            y=0;
        }
        //this is a parameterized constructor.
        Point(int x1, int y1){
            x=x1;
            y=y1;
        }

        void Print(){

            cout<<x<<" "<<y<<endl; ;
        }

};

int main()
{ 
    Point p1;
    Point p2(10,20);
    p1.Print();
    p2.Print();

    //creating a new pointer
    Point *ptr = new Point(5,10);

    //this will print the values of 5 and 10;
    ptr->Print();

    return 0;
}