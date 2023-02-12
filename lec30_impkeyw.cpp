#include<iostream>
#include<cmath>
using namespace std;
#define c 3*pow(10,8)//c=3*10^8

inline int update(int y){
    return ++y;
}

void arrprint(int arr[],int size,int start=0){//if start is not mentioned arr will be printed from 1 st index
    for(int i=start;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int x=5;//global variable acts as pass by reference

int main(){
    //macros
    int m;
    cin>>m;
    cout<<"product mass and velocity(air): "<<m*c<<endl;
    cout<<endl;

    //global variable and inline fun 
    cout<<"before : "<<x<<endl;
    int ans=update(x);
    cout<<"after : "<<ans<<endl;
    cout<<endl;

    //defalut arfuments
    int n;
    int start;
    cout<<"enter total size: "<<endl;
     cin>>n;
     cout<<"enter ele: "<<endl;
        int *arr=new int[n];
        for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool b=0;
    cout<<"interested in typing the starting to be printed: ";
    cin>>b;
    if(b==1){
        cout<<"enter index: "<<endl; 
    cin>>start;
    }
    arrprint(arr,n,start);

    delete []arr;

    return 0;
}