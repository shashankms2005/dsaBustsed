#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"enter value of a "<<endl;
cin>>a;
cout<<"enter value of b "<<endl;
cin>>b;

cout<<"value of a and b is"<<a<<","<<b<<"respectively"<<endl;
int c;
c=a;
a=b;
b=c;

cout<<"value after swaping"<<endl;
cout<<"a="<<a;
cout<<"b="<<b;




    return 0;
}