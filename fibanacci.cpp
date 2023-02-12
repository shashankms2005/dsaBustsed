#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    int nxtnum=0;
    int n;
    cout<<"enter a num:"<<endl;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        nxtnum=a+b;
        cout<<nxtnum<<" ";
   a=b;
   b=nxtnum;
    }
   
    return 0;
}