#include<iostream>
#include<queue>//FIRST IN FIRST OUT
using namespace std;
int main(){
    queue<string>q;
    q.push("shashank");
      q.push("is_a");
        q.push("very");
          q.push("good");
            q.push("boy");
            cout<<"first ele: "<<q.front()<<endl;
            cout<<"last ele: "<<q.back()<<endl;
            q.pop();//pops first ele not last because of FIFO
            while(!q.empty()){
                cout<<q.front()<<" ";
                q.pop();
            }
    return 0;
}
//PRIORITY QUEUE NOT COMPLETED