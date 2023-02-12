 //pivot:least ele index
#include<iostream>
using namespace std;
int ans=0;
int mid=0;
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
int main(){
    int arr[100]={0};
    int size=0;
    cout<<"enter size:"<<endl;
    cin>>size;
    cout<<"enter array elements:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    ans=pivot(arr,size);
    cout<<"pivot(least) element : "<<ans<<endl;

}