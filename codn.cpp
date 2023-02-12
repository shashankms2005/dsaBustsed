#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"value of n is:"<<n<<endl;
    if(n>0){
        cout<<"+"<<endl;
    }else if(n<0){
        cout<<"-"<<endl;
    }else{
        cout<<"0"<<endl;
    }
    return 0;
}