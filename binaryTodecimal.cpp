#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n;
int r=0;
int ans=0;
int i=0;
cin>>n;
while(n!=0){
    r=n%10;
    ans=ans+(r*(pow(2,i)));
    n=n/10;
    i++;
}
cout<<ans<<endl;

    return 0;
}