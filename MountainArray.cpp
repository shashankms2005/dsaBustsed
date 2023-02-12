#include<iostream>
using namespace std;
int m=0;
int mountain(int arr[],int size){
    int s=0;
    int e=size-1;
    m=s+((e-s)/2);
    while(s<e){
        if(arr[m]<arr[m+1]){
            s=m+1;
            return arr[s];
        }else{
            e=m;
        } 
        m=s+((e-s)/2);
    }

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
    int ans=mountain(arr,size);
    cout<<"highest peak is: "<<ans<<endl;
    return 0;
}