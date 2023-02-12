#include<iostream>
using namespace std;
int x=0;
int y=0;
int bits(int a,int b){
    while(a!=0){
    int bit=a&1;
    if(bit==1){
      x++;
    }
      a=a>>1;
    } 
    while(b!=0){
        int bit1=b&1;
        if(bit1==1){
            y++;
        }
        b=b>>1;

    }
    return x+y;
}
int main(){
int a,b;
cin>>a>>b;
int ans=bits(a,b);
cout<<"number of set bits in "<<a<<"and"<<b<<"is"<<ans<<endl;

    return 0;
}