#include<iostream>
using namespace std;
int ans=0;
int mid=0;
int y=0;
int pivot(int arr[],int size){
    int s=0;
    int e=size-1;
    mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
           
        }else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
   return s;
}
int binarysearch(int arr[],int size,int key,int x,int y){
    int start=x;
    int end=y;
    mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
        start=mid+1;    
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;

    }}
int main(){
      int arr[100]={0};
    int size=0;
    int k=0;
    cout<<"enter size:"<<endl;
    cin>>size;
    cout<<"enter array elements:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    ans=pivot(arr,size);
    cout<<"pivot"<<ans;
    cout<<"enter key:"<<endl;
    cin>>k;
    y=ans-1;
    if(k>arr[0] && k<arr[y]){
    int a1=binarysearch(arr,size,k,0,y);
    cout<<a1;
    }else{
        int q=size-1;
        int a2=binarysearch(arr,size,k,ans,q);
        cout<<a2;
    }
return 0;
}