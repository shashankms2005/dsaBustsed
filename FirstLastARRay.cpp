#include<iostream>
using namespace std;
int ans=0;
int m=0;
int firstoccurance(int arr[],int size,int key){
    int s=0;
    int e=(size-1);
    m=s+((e-s)/2);
    while(s<=e){
    if(arr[m]==key){//storing and updatind and checking
        ans=m;
        e=m-1;
    }else if(arr[m]>key){
    e=m-1;
    }else{
        s=m+1;
    }
    m=s+((e-s)/2);
    }
    return ans;
}
int lastoccurance(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    m=s+((e-s)/2);
    while(s<=e){
        if(arr[m]==key){//storing and checking
            ans=m;
            s=m+1;//only one change rest all same
        }else if(arr[m]>key){
            e=m-1;
        }else{
            s=m+1;
        }
      m=s+((e-s)/2);
    }
    return ans;
}
int main(){
    int arr[100]={0};
    int size=0;
    int key=0;
    cout<<"enter size of array:"<<endl;
    cin>>size;
    cout<<"enter array elements:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"enter key:"<<endl;
    cin>>key;
    int a1=firstoccurance(arr,size,key);
    int a2=lastoccurance(arr,size,key);
    cout<<"first "<<key<<" is in "<<a1<<" index "<<endl;
     cout<<"second "<<key<<" is in "<<a2<<" index "<<endl;
    return 0;
}