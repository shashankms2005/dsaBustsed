#include<iostream>
using namespace std;
int f1=1;//n!
int f2=1;//r!
int f3=1;//(n-r)!
int a=0;
int ncr(int n,int r){
    for(int i=1;i<=n;i++){
         f1=f1*i;
    }
    for(int i=1;i<=r;i++){
        f2=f2*i;
    }
    for(int i=1;i<=(n-r);i++){
        f3=f3*i;
    }
    a=f1/(f2*f3);
    return a;
}
int main(){
    int n,r;
    cout<<"enter values of n and r:"<<endl;
    cin>>n>>r;
    int ans=ncr(n,r);
    cout<<ans<<endl;
    return 0;
}