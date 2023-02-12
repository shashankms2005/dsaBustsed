#include<iostream>
using namespace std;
bool ispossible(int arr[],int size,int k,int m){
   int paintcount=1;
    int paintersum=0;
    for(int i=0;i<size;i++){
     if(paintersum+arr[i]<=m){
        paintersum+=arr[i];
     }else{
        paintcount++;
        if(paintcount>k || paintersum>m){
            return false;
        }
        paintersum=arr[i];
     }
    }
    return true;
}
int painter(int arr[],int size,int k){
    int s=0;
    int sum=0;
    for(int i=0;i<size;i++){
         sum+=arr[i];
    }
    int e=sum;
    int m=s+(e-s)/2;
    int a1=0;
    while(s<=e){
        if(ispossible(arr,size,k,m)){
            a1=m;
            e=m-1;
        }else{
            s=m+1;
        }
        m=s+(e-s)/2;
    }
    return a1;
}
int main(){
    int arr[100]={0};
    int size=0;
    cout<<"enter size:(total blocks) "<<endl;
    cin>>size;
    cout<<"enter array elements:(block in a block) "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
    int k=0;
    cout<<"enter num of painter: "<<endl;
    cin>>k;
    int ans=painter(arr,size,k);
    cout<<"ans: "<<ans<<endl;
    return 0;
}