#include<iostream>
using namespace std;
int main(){
char ch;
cin>>ch;
if((ch>='a')&&(ch<='z')){
    cout<<"lower case"<<endl;
}else if((ch>='A')&&(ch<='Z')){
    cout<<"UPPER CASE"<<endl;
}else {
    cout<<"its numeric"<<endl;
}

    return 0;
}