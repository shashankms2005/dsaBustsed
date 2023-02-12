#include<iostream>
using namespace std;
int temp[100];
void rotate(int a[],int n,int k){
    for(int i=0;i<n;i++){
     temp[(k+i)%n]=a[i];//standard formula to rotate
    }
       for(int i=0;i<n;i++){
         cout<<temp[i]<<" ";
    }
}
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
    cout<<"enter k (by how many place ele to be shifted): "<<endl;
    cin>>k;
 rotate(a,size,k);
    
    return 0;
}