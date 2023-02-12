#include<iostream>
using namespace std;
void insertion(int arr[],int size){
    for(int i=1;i<size;i++){
        int temp=arr[i];
 
     int j=i-1;//because it can be outside the loop for: arr[j+1]=temp
     for(;j>=0;j--){
        if(arr[j]>temp){
            arr[j+1]=arr[j];
        } 
        else{
            break;
        }
        }
        arr[j+1]=temp;
    }    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[100]={0};
    int size=0;
    cout<<"enter array size: "<<endl;
    cin>>size;
    cout<<"enter array ele: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
    insertion(arr,size);
    return 0;
}