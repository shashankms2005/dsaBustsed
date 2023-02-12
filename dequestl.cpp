#include<iostream>
#include<deque>//double ended queue:insertion and deletion can be done in both ends 
using namespace std;
int main(){
    deque<int>d;
    d.push_back(4);
    d.push_back(7);
    d.push_back(1);//last push_back ele at last
    d.push_front(41);
    d.push_front(5);
    d.push_front(0);//last push_front ele at front
    cout<<"deque before manipulation:  "<<endl;
    for(auto i:d){
    cout<<i<<" ";
  }
  cout<<endl;

  cout<<"ele at 5 th index:"<<d.at(5)<<endl;
  cout<<"deque is empty or not: "<<d.empty()<<endl;
  cout<<"ele at front: "<<d.front()<<"  ele at back: "<<d.back()<<endl;
  deque<int>::iterator itr1,itr2;
  itr1=d.begin();
  itr2=d.end()-3;
 //OR d.erase(d.begin(),d.end()-3)
  d.erase(itr1,itr2);//begin()=0 th index(take it as 1);begin()+n => 0 to n ele ex:1 2 3 4 ; d.begin(),d.begin+2 then 1 and 2 delete same for end()(-+)n 
  cout<<"after erasing: "<<endl;
      for(auto i:d){
    cout<<i<<" ";
  }
  cout<<endl;

  d.pop_back();
  cout<<"deleteing ele at back: "<<endl;
      for(auto i:d){
    cout<<i<<" ";
  }
  cout<<endl;

  d.pop_front();
  cout<<"deleteing ele at front: "<<endl;
      for(auto i:d){
    cout<<i<<" ";
  }
  cout<<endl;

  d.erase(d.begin(),d.end());
cout<<"deque empty or not: "<<d.empty()<<endl;//empty because of erase
    cout<<"max size: "<<d.max_size();//max size no change even though no ele
    return 0;
}