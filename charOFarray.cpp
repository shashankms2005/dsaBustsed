#include<iostream>
using namespace std;
int size(char name[]){//size of array like this only || if vector then:v.size() || string: str.size()
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
void reverse(char name[],int x){
    int s=0;
    int e=x-1;
    while(s<=e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
    for(int i=0;i<x;i++){
        cout<<name[i];
    }
}
int main(){
    char name[100];//does not count enter,space ,tab || '\0' act as terminator
    cout<<"enter name: "<<endl;
    cin>>name;
    cout<<"name :"<<name<<endl;
    int x=size(name);//in array of char no need to send size(no compulsion)
    cout<<"size: "<<x<<endl;
    reverse(name,x);
    return 0;
}