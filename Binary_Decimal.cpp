#include<iostream>
using namespace std;
int main(){

int n;
int count = 0 ;
int ans=0;
cin>>n;

while(n!=0){
    n = n/10;
    count++;
}

cout<<" Count of value is : "<<count<<endl;

for(int i=1 ; i<=count ; ++i){
    n=n/10;
    //cout<<i<<endl;
    ans = ans+(n*(2*i));
}
cout<<ans;

cout<<ans;  
    return 0;
}