#include <iostream>
using namespace std;
class stack
{
public:
    int top;
    int *arr;
    int size;

    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int data)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "stack overflow!" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            int val = arr[top];
            top--;
            cout << val << " is deleted" << endl;
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }

    int peek()
    {
        if (top >=0)
        {
            return arr[top];
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }

    bool empty()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main(){
    stack s(8);
    s.push(13);
    s.push(23);
    s.push(34);
    s.push(93);
    s.push(37);

    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
     s.pop();
    cout<<s.peek()<<endl;
     s.pop();
    cout<<s.peek()<<endl;
     s.pop();
    cout<<s.peek()<<endl;
     s.pop();
    cout<<s.peek()<<endl;
  if(s.empty()){
        cout<<"stack is empty"<<endl;
       }else{
        cout<<"stack has elements"<<endl;
       }



return 0;
}