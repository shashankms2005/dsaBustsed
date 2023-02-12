#include<iostream>
using namespace std;

void triplet(int arr[],int size,int n){
     for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){ 
              if((arr[i]+arr[j]+arr[k])==n){
                cout<<arr[i]<<arr[j]<<arr[k]<<endl;
                }
            }
        }
     }
}
int main(){
    int arr[50];
    int size=0;
    cout<<"enter size:"<<endl;
    cin>>size;
    cout<<"enter ele:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    int n=0;
    cout<<"enter num to find triplet:"<<endl;
    cin>>n;
triplet(arr,size,n);
 
    return 0;
}