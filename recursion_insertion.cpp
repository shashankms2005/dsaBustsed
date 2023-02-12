#include<iostream>
using namespace std;
void insertionsort(int *arr,int n,int si){
    if(si>=n-1){
        return;
    }
    int temp=arr[si];
    int j=si-1;
    for(;j>=0;j--){
        if(arr[j]>temp){
            arr[j+1]=arr[j];
        }else{
            break;
        }
    }
    arr[j+1]=temp;

    insertionsort(arr,n,si+1);
}
int main(){
    int arr[100];
    int size;
    cout<<"enter array size and ele: "<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
    int si=1;
    insertionsort(arr,size,si);
    cout<<"elements after insertion sort: "<<endl;
       for(int i=0;i<size;i++){
       cout<<arr[i]<<" ";
    }
    return 0;
}