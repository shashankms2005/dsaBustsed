#include<iostream>
using namespace std;
int count=0;
void check(int a[],int n){
    for(int i=1;i<n;i++){//i=1 because a[i-1] if i=0;a[-1] no value so
        if(a[i-1]>a[i]){
         count++;
        }
        if(a[n-1]>a[0]){
            count++;
        }
    }
    if(count<=1){//< for normal ans = because if all are equal then also its sorted
    cout<<1;
    }else{
    cout<<0;
}}
int main(){
     int a[100]={0};
    int size=0;
    int k=0;
    cout<<"enter array and size: "<<endl;
    cin>>size;
    cout<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    check(a,size);
    return 0;
}