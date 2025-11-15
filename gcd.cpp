#include<iostream>
using namespace std;
int main(){

int n1,n2;

cin>>n1>>n2;
int ans=1;

int x;

if(n1>n2){
    x=n2;
}else{
    x=n1;
}

for(int i=1 ; i<=x ; i++){
    if(n1%i==0 and n2%i==0){
        ans = i;
    }
}
cout<<ans<<endl;


return 0;
}