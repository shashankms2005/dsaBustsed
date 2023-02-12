#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l;
    l.push_back(4);
     l.push_back(7);
      l.push_front(10);
       l.push_front(1);
       for(auto i:l){
        cout<<i<<endl;
       }
       cout<<endl;
       cout<<"empty or not: "<<l.empty()<<endl;
       cout<<"front"<<l.front()<<endl;
       cout<<"back"<<l.back()<<endl;
       l.pop_back();
       l.pop_front();
       cout<<"ele after pop_back and pop_front() "<<endl;
       for(auto i:l){
        cout<<i<<endl;
       }
       cout<<endl;
       list<int>::iterator itr1;//syntax for iterator:-> datastructure_name<datatype of iteratorS>::iterator itr_variables;
       itr1=l.begin();
     l.erase(itr1);//in list erase no +n or -n
      for(auto i:l){
        cout<<i<<endl;
       }
    cout<<"size: "<<l.size();// no at() here
    return 0;
}