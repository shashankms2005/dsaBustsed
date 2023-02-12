#include<iostream>
using namespace std;
void swaping(int ar[],int size){
   
    for(int i=0;i<size;i=i+2){
        if(i<(i+1))
        swap(ar[i],ar[i+1]);

    }
}
int main(){
int ar[10]={2,4,5,6,9,8,7,85,52,0};
swaping(ar,10);
for(int i=0;i<10;i++){
    cout<<ar[i]<<" ";
}
    return 0;
}