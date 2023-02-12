#include<iostream>
using namespace std;
int max(int ar[],int size){
    int max=0;//int max=INT32_MIN
    for(int i=0;i<size;i++){
        if(ar[i]>max){
            max=ar[i];
        }
    }
    return max;
}
int min(int ar[],int size){
    int min=INT32_MAX;
    for(int i=0;i<size;i++){
        if(ar[i]<min){
            min=ar[i];
        }
    }
    return min;
}
int main(){
    int ar[100];
    int size=0;
    cout<<"enter size:"<<endl;
    cin>>size;
    cout<<"enter elements"<<endl;
    for(int i=0;i<size;i++){
        cin>>ar[i];
    }
    int a=max(ar,size);
    cout<<"max:"<<a<<endl;
    int b=min(ar,size);
    cout<<"min:"<<b<<endl;

    return 0;
}