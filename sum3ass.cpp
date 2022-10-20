#include<iostream>
using namespace std;
int main(){
int a,b,c,d,num,sum;
cout<<"enter three digit num:"<<endl;
cin>>num;//ex 123
a=num/100;//to get quotient of num      123/100=1
b=num%100;//to get remainder of num      123%100=23
c=b/10;//to get quotient of the remainder num in b     23/10=2
d=b%10;//to get the last num          23%10=3
sum=a+c+d;
cout<<"sum of the digits is:"<<sum<<endl;




    return 0;
}