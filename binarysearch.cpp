#include<iostream>//sorted default is small to big
using namespace std;
int mid=0;
int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    mid=(start+end)/2;//mid=s+(e-s)/2;
    while(start<=end){
        if(arr[0]<arr[1]){//this is for small to big
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){//if key is greater we should go to right side
        start=mid+1;     //ex:1 2 3 4 5 ,key:4, mid will get:3 now, 4>3 so right side.
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;

    }
    else if(arr[0]>arr[1]){//this is for big to small
          if(arr[mid]==key){//if key is greater we should go to right side
            return mid;     //ex:5 4 3 2 1,key:4, mid will get:3 now,4>3 so left.
        }
        if(key>arr[mid]){
        end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;

    }}
 
    return -1;
}
int main(){
    int arr[100]={0};
    int size=0;
    int key=0;
    cout<<"enter size:"<<endl;
    cin>>size;
    cout<<"enter elements in sorted order:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"enter the element to be searched:"<<endl;
    cin>>key;
    int ans=binarysearch(arr,size,key);
    cout<<key<<" is in "<<ans<<"index";
    return 0;
}