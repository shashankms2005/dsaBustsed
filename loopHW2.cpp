//prime
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool x=0;
    for(int i=2;i<n;i++){
        if((n%i)==0){
            cout<<" not prime"<<endl;
            x=1;
       break;
        }}
        if(x!=1){
            cout<<"prime"<<endl;
        }
        
    return 0;
}