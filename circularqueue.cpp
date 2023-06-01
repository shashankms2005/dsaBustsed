#include <bits/stdc++.h> 
class CircularQueue{
    public:
    // Initialize your data structure.
    int *arr;
    int front;
    int rear;
    int n1;
    CircularQueue(int n){
        // Write your code here.
        arr=new int[n];
        front=-1;
        rear=-1;
        n1=n;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // Write your code here.
        if( (front==0 && rear==n1-1) || (rear==(front-1)%(n1-1) )){
            return false;
        }else if(front==-1){
            rear=0;
            front=0;
        }else if(rear==n1-1 && front!=0){
            rear=0;
        }else{
            rear++;
        }
        arr[rear]=value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // Write your code here.
        int val=arr[front];
        if(front==-1){
            return -1;
        }else if(front==rear){
            front=-1;
            rear=-1;
        }else if(front==n1-1 && rear!=0){
            front=0;
        }else{
            front++;
        }
        return val;
    }
};