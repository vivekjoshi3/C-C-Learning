#include<iostream>
#include<string.h>
using namespace std;
int main()
{

    string s;

    cout<<"Please enter the string name ";
    cin>>s;

    string newString;

    int stringLength = s.length()-1;
    

   //check whether the strings are of length
   while(stringLength>=0){
    newString = newString+s[stringLength];
    stringLength--;
   }

   
   cout<<newString;

    return 0;
}