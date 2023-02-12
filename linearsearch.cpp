#include<iostream>
using namespace std;
int count =0;
int linear(int arr[],int size,int key){
    for(int i=0;i<=size;i++){
        if(arr[i]==key){
            count++;
        }
    }
return count;
}
int main(){
    int ar[100]={0};
    int key=0;
    int size=0;
    cout<<"enter size:"<<endl;
    cin>>size;
    cout<<"enter elements:"<<endl;
    for(int i=0;i<size;i++){
        cin>>ar[i];
    }
    cout<<"enter the element to be searched:"<<endl;
    cin>>key;
   int b=linear(ar,size,key);
    if(b>=1){
        cout<<key<<"is present"<<endl;
        cout<<"number of times "<<key<<"repeates is:"<<b<<endl;
    }
  
    return 0;
}