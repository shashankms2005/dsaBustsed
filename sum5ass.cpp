#include<iostream>
using namespace std;
int main(){
int first,b,second,d,third,f,fourth,sum,num;

cout<<"enter 5 digit num:"<<endl;
cin>>num;//ex 12345
first=num/10000;//12345/10000=1
b=num%10000;//12345%10000=2345
second=b/1000;//2345/1000=2
d=b%1000;//2345%1000=345
third=d/100;//345/100=3
f=d%100;//345%100=45
fourth=f/10;//45/10=4
sum=first+fourth;
cout<<"sum of first and second last digit of the num is:"<<sum<<endl;










    return 0;
}