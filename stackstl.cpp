#include<iostream>
#include<stack>//LIFO (ex:plates)
using namespace std;
int main(){
    stack<int>s;//for string: stack<string>s;
    s.push(8);//s.push("xx");
    s.push(80);//here no push_back only push()
    s.push(18);
    s.push(1);

    cout<<"top element "<<s.top()<<endl;//prints first ele(LIFO)
    cout<<"size "<<s.size()<<endl;
    
    //to print stack:
    cout<<"ele: "<<endl;
        while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }//after printing stack=0 because of s.pop() and loop runs till stack empty();
    return 0;
}