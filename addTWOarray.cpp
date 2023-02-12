#include<iostream>
using namespace std;
int carry=0;
int q=0;
void sumofarray(int a[],int n,int b[],int m,int ans[],int k){
    int i=n-1;
    int j=m-1;
    while(i>=0 && j>=0){
        int sum=sum+a[i]+a[j]+carry;
        carry=sum/10;
        q=sum%10;
        ans[k-1]=q;
        i--;
        j--;
        k--;
    }
    for(int i=0;i<k;i++){
        cout<<ans[k];
    }
}
int main(){
      int a[100]={0};
    int size1=0;
    cout<<"enter 1array and size: "<<endl;
    cin>>size1;
    cout<<endl;
    for(int i=0;i<size1;i++){
        cin>>a[i];
    }
      int b[100]={0};
    int size2=0;
    cout<<"enter 2array and size: "<<endl;
    cin>>size2;
    cout<<endl;
    for(int i=0;i<size2;i++){
        cin>>b[i];
    }
    int ans[100];
    int max=0;
    if(size1>=size2){
     max=size1;
    }else{
       max=size2;
    }
    sumofarray(a,size1,b,size2,ans,max);
    return 0;
}