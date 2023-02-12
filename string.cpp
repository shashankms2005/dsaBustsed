#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter string: "<<endl;
    cin>>s;
    cout<<s;
    cout<<endl;
    s.pop_back();
    cout<<s;
    cout<<endl;
    s.push_back('a');
    cout<<s;
    return 0;
}