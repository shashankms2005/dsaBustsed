#include<iostream>
using namespace std;

int update1(int x){
 x+=1;
 return x;
}

int update2(int &x){
 x+=1;
 return x;
}

int main(){
    int x=5;
    int &y=x;
    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
    y++;
    cout<<"value of x after updating y: "<<x<<endl;
    x++;
    cout<<"valuse of y after updaing x: "<<y<<endl;
    cout<<endl;

    cout<<"value of x before updating using pass by value: "<<x<<endl;
    int a1=update1(x);
     cout<<"value of x after updating using pass by value: "<<x<<endl;
     cout<<endl;
     cout<<endl;
     
    cout<<"value of x before updating using pass by reference: "<<x<<endl;
    int a2=update2(x);
     cout<<"value of x after updating using pass by reference: "<<x<<endl;
     cout<<endl;
    return 0;
}