#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=(n-i+1);j++){
        cout<<j;
    }for(int j=1;j<=(i-1);j++){
        cout<<"*";
    }for(int j=1;j<=(i-1);j++){
        cout<<"*";
    }for(int j=(n-i+1);j>=1;j--){
        cout<<j;
    }


  cout<<endl;
}
return 0;
}
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1