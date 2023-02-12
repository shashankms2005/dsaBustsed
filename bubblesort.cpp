#include<iostream>
using namespace std;
void bubble(int arr[],int size){
    for(int i=1;i<size;i++){
        bool y;
        for(int j=0;j<size-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
                y=true;
            }
        }
        if(y=false){
            break;
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
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
    bubble(arr,size);
    return 0;
}