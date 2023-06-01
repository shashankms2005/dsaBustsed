/* Structure of a node in Queue
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

And structure of MyQueue
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
}; */

//Function to push an element into the queue.
void MyQueue :: push(int x)
{
        // Your Code
        if(rear==NULL && front==NULL){
            QueueNode* temp=new QueueNode(x);
            rear=temp;
            front=temp;
        }else{
             QueueNode* temp=new QueueNode(x);
             QueueNode* forward=rear->next;
             rear->next=temp;
             temp->next=forward;
            rear=rear->next;
        }
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
        // Your Code  
         QueueNode* val=front;
         if(front==NULL){
             return -1;
         }else{
             int d=front->data;
             front=front->next;
             if(front==NULL){
                 rear=NULL;
             }
             val->next=NULL;
             delete(val);
             return d;
         }
}
