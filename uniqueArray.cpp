//sample input 1,2,2,1,6,5,6,5,8  output is 8
#include<iostream>
using namespace std;
int x=0;
int  unique(int ar[],int size){
for(int i=0;i<size;i++){
    x=x^ar[i];

}
return x;
}
int main(){
    int ar[100]={0};
    int size;
    cout<<"enter array size "<<endl<<"and elements:"<<endl;
    cin>>size;
   
   
    for(int i=0;i<size;i++){
        cin>>ar[i];
    }
    int y=unique(ar,size);
    cout<<y;
    return 0;
}