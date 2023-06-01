#include <bits/stdc++.h> 
class Deque
{
public:
    // Initialize your data structure.
    int *arr;
    int front;
    int rear;
    int n1;
    Deque(int n)
    {
        // Write your code here.
        arr=new int[n];
        front=-1;
        rear=-1;
        n1=n;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        // Write your code here.
        if((front==0 && rear==n1-1) || ((front!=0) && rear==(front-1)%(n1-1))){
            return false;
        }else if(front==-1){
            front=0;
            rear=0;
        }else if(front==0 && rear!=n1-1){
            front=n1-1;
        }else{
            front--;
        }
        arr[front]=x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        // Write your code here.
        if((front==0 && rear==n1-1) || ((front!=0) && rear==(front-1)%(n1-1))){
            return false;
        }else if(rear==-1){
            front=0;
            rear=0;
        }else if(rear==n1-1 && front!=0){
            rear=0;
        }else{
            rear++;
        }
        arr[rear]=x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        // Write your code here.
        if(front==-1 && rear==-1){
            return -1;
        }
         int val=arr[front];
         //arr[front]=-1;
        if(front==rear){
            front=-1;
            rear=-1;
        }else if(front==n1-1){
            front=0;
        }else{
            front++;
        }
        return val;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        // Write your code here.
        if(rear==-1 && front==-1){
            return -1;
        }
         int val=arr[rear];
        // arr[rear]=-1;
         if(front==rear){
            front=-1;
            rear=-1;
        }else if(rear==0){
            rear=n1-1;
        }else{
            rear--;
        }
        return val;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        // Write your code here.
        if(front==-1){
            return -1;
        }else{
        return arr[front];
    }
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        // Write your code here.
        if(rear==-1){
            return -1;
        }else{
        return arr[rear];
    }
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        // Write your code here.
        if(front==-1 && rear==-1){
            return true;
        }else{
        return false;
    }
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        // Write your code here.
        if((front==0 && rear==n1-1) || ((front!=0) && rear==(front-1)%(n1-1))){
            return true;
        }else{
        return false;
        }
    }
};