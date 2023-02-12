#include<iostream>
using namespace std;
bool ispossible(int arr[],int size,int k,int m){
    int studentcount=1;
int pagesum=0;
for(int i=0;i<size;i++){
if(pagesum+arr[i]<=m){
    pagesum+=arr[i];
     }
else
{
    studentcount++;
    if(studentcount>k || arr[i]>m){
        return false;
    }
    pagesum=arr[i];
}
}
return true;
}
int bookallot(int arr[],int size,int k){
    int ans=0;
    int sum=0;
    int s=0;
for(int i=0;i<size;i++){
    sum=sum+arr[i];
}
int e=sum;
int m=s+(e-s)/2;
while(s<=e){
    if(ispossible(arr,size,k,m)){
        ans=m;
    e=m-1;
    }else {
        s=m+1;
    }
    m=s+(e-s)/2;
}
return ans;
}
int main(){
    int arr[100]={0};
    int size=0;
    int k=0;
    cout<<"enter size: (total book)"<<endl;
    cin>>size;
    cout<<"enter array elements:(pages in book) "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"enter num of book: "<<endl;
    cin>>k;
    int ans1=bookallot(arr,size,k);
    cout<<ans1;
    return 0;
}