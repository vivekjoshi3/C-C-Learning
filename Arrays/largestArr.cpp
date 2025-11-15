    #include<iostream>
    using namespace std;
    int main(){
        int size,max=0;
        cin>>size;

        int arr[size];
        

        cout<<"Enter the values"<<endl;

        for(int i=0 ; i<size ; i++){
            cin>>arr[i];
        }
        
        for(int i=0 ;i<size ; i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        cout<<max;

        return 0;
    }