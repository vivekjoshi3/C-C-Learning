#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    string s;

    cout<<"Enter the string value ";
    cin>>s;

    int l = s.length()-1;
    string newString;

    while(l>=0){
        newString = newString+s[l];
        l--;
    }
    if(newString==s){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}