#include<iostream>
using namespace std;
int ans=0;
int sum(int ar[],int size){
    for(int i=0;i<size;i++){
    ans=ans+ar[i];
    }
    return ans;
}

int main(){
    int ar[100]={0};
    int size;
    cout<<"enter size"<<endl;
    cin>>size;
    cout<<"array elements"<<endl;
    for(int i=0;i<size;i++){
        cin>>ar[i];
    }
   int ans=sum(ar,size);
   cout<<ans;
 
    return 0;
}