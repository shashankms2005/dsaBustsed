#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,5>a={9,10,11,4,1};
    cout<<a.size()<<endl;
    cout<<"array at 3 rd index: "<<a.at(3)<<endl;//() not []
    cout<<"array first index: "<<a.front()<<endl;
    cout<<"last array: "<<a.back()<<endl;
    cout<<a.empty()<<endl;
    return 0;
}