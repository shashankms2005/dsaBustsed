#include<iostream>
#include<map>//unordered map random outputS
using namespace std;
int main(){
    map<int,string>m;
    m.insert({2,"second"});
     m.insert({1,"first"});
     //   OR
     m[3]="third";
        m[4]="fourth";
        for(auto i:m){
            cout<<i.first<<" "<<i.second<<endl;
        }//        ^                ^
    m.erase(2);//  |                | 
    
    return 0;//    |                |
}             //  integer(key)     string