#include<iostream>
#include<string>

using namespace std;
int main(){

string s = "This is good sentence";

int count = 1;

for(int i=0 ; i<s.length() ; i++){
    if(s[i] == ' '){
        count++;
    }

}

cout<<count<<endl;

    return 0;
}