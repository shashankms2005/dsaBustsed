#include<iostream>
#include<algorithm>
using namespace std;
bool ispossible(int arr[],int n,int k,int m){
    int cowcount=1;
    int lastcow=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]-lastcow>=m){
            cowcount++;
            if(cowcount==k){
                return true;
            }
            lastcow=arr[i];
        }
    }
    return false;
}
int agrrcow(int arr[],int n,int k){
    int a1=0;
    int s=0;
    int e=arr[n-1]-arr[0];
    int m=s+(e-s)/2;
    while(s<=e){
        if(ispossible(arr,n,3,m)){
       a1=m;
          s=m+1;
        }else{
            e=m-1;
        }
        m=s+(e-s)/2;
    }
    return a1;
}
int main(){
    int arr[]={20,15,10,17};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(int i=0;i<4;i++){
        cout<<arr[i];
    }
    cout<<endl;
    int ans=agrrcow(arr,4,3);
    cout<<ans;
    return 0;
}