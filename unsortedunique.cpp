
// class Solution
// {
//     public:
   /** Node *sorted(Node* &head){
         Node *i;
     Node *j;
     int temp;
     for(i=head;i->next!=NULL;i=i->next){
         Node* min=i;
         for(j=i->next;j!=NULL;j=j->next){
            if(min->data > j->data){
                min=j;
            } 
         }
         temp=i->data;
         i->data=min->data;
         min->data=temp;
     }
     return head;
    }
    **/
    //Function to remove duplicates from unsorted linked list.
   // Node * removeDuplicates( Node *head) 
    //{
     // your code goes here
    /** 
     APPROACH 2 ->
     map<int,bool>visited;
     Node* prev=NULL;
     Node* curr=head;
     while( curr!=NULL){
         if(visited[curr->data]==true ){
                 prev->next=curr->next;
             delete(curr);
            curr=prev->next;
         }else{
             visited[curr->data]=true;
             prev=curr;
             curr=curr->next;
         }
     }
     **/
     //APPROACH 3 -> CORRECT ANS ONLY BUT ITS SORTED
   /** Node* sort=sorted(head);
    Node* tem=sort;
    while(tem!=NULL && tem->next!=NULL){
        if(tem->data==tem->next->data){
            Node* next=tem->next->next;
            delete(tem->next);
            tem->next=next;
        }
        tem=tem->next;
    }
 
     
     return sort;
     **/
//     }
// };