#include<iostream>
using namespace std;
int main(){
int a,b;

char ch;
cout<<"enter two values"<<endl;
cin>>a>>b;
cout<<"enter the opperation"<<endl;
cin>>ch;
switch (ch){
    case '+' : 
    cout<<"sum of a and b is:"<<a+b<<endl;
    break;

    case '-':  
    cout<<"diff of a and b is:"<<a-b<<endl;
    break;

    case '*': 
    cout<<"product of a and b is:"<<a*b<<endl;
    break;

    case '/': 
    cout<<"quotient of a and b is:"<<a/b<<endl;
    break;

    default:
    cout<<"wrong input"<<endl;
    break;
}



    return 0;
}