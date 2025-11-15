#include<iostream>
using namespace std;
//THIS CODE IS USED FOR CHECKING HOW CAN WE ACCEPT THE DATA USING THE OOPS CONCEPTS.

int const val = 100;

//DEFINED CLASSES ARE ALSO THE CORRECT WAY OF DOING THESE THINGS

class ITEMS{

    int items[val];
    int itemPrice[val];
    int count;
    public:
        void initCounter(void){count = 0;}
        void getData(void);
        void getSum(void);
        void removeData(void);
        void displaySum(void);
};

void ITEMS ::  getData(void){

    //get the item ID and item Price
    cout<<"Enter the ID for the item "<<endl;
    cin>>items[count];

    cout<<"Enter the price of the item "<<endl;
    cin>>itemPrice[count];
    
    count++;
}

void ITEMS :: displaySum(void){

    float sum =0;
    for(int i=0 ; i<count ; i++){
            sum = sum + itemPrice[i];
    }
    cout <<"Total price of the item is "<<sum;

}

void ITEMS : remove(void){

    int a;
    cout<<"Enter the Item Code "<<endl;
    cin>>a;

    for(int i=0 ;i<count ; i++){
        if(items[i] == a){
            itemPrice[i] = 0;
        }
    }

}
int main()
{
    ITEMS order;
    order.initCounter();
    order.getData();
    order.displaySum();

    int itemNo;
    
    cout<<"Do you wish to delete any item ??";
    cin
    return 0;
}