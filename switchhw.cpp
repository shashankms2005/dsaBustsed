//rupees change
#include<iostream>
using namespace std;
int main(){
    int amt=0;
    int note=0;
    int long x=0;
    int long y=0;
    int long z=0;
    int long k=0;
    int long p=0;
    int long q=0;
    int long r=0;
    int long s=0;
    int long w=0;
   
cout<<"enter the amount:"<<endl;
cin>>amt;

switch(true){
    case 1:
    y=amt/100;
    cout<<"number of 100 rupees note:"<<y<<endl;
    x=amt-(100*y);
     
    case 2 :
    z=x/50;
    cout<<"number of 50 rupees note:"<<z<<endl;
    k=x-(50*z);
       
    case 3 :
    p=k/20;
    cout<<"number of 20 rupees note:"<<p<<endl;
    q=k-(20*p);
  
    case 4 :
    r=q/10;
    cout<<"number of 10 rupees note :"<<r<<endl;
    s=q-(10*r);

    case 4 :
    w=s/1;
    cout<<"number of 1 rupee coin :"<<w<<endl;
  
}


    return 0;
} 
