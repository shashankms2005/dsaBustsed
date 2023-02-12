#include<iostream>//set gives sorted output
#include<set>//unordered set gives randon output
using namespace std;
int main(){
    set<int>s;
    s.insert(1);//it gives unique output inspite of ele how many types be entered
      s.insert(2);
        s.insert(1);
          s.insert(4);
            s.insert(3);
              s.insert(6);
                s.insert(5);
                for(auto i:s){
                    cout<<i<<" "<<endl;
                }
                if(s.count(3)){//we cant print count(), we can only use that the true or false someting like that
              cout<<"  3 is there  "<<endl;
                }
                 
                 cout<<"ele after 3: ";//3 also includes
                auto p=s.find(3);//find() is used to iterator of a ele however we cant print it but can be used for printing ele after find(ele), something like that
            for(auto i=p;i!=s.end();i++){
                cout<<*i<<" ";//*pointer
               }
               cout<<endl;
                // set<int>::iterator itr1,itr2;
                // itr1=s.begin();
                // itr2=s.end();
                s.erase(s.begin(),s.end());//here also same like list no +n or -n
                cout<<"size: "<<s.size();//0 because of erase()
    return 0;
}