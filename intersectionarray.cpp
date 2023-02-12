#include<iostream>
using namespace std;

void inter(int ar1[],int ar2[],int s1,int s2){
    cout<<"ans"<<endl;
 
    int i=0;
    int j=0;
    while(i<s1 && j<s2){
        if(ar1[i]==ar2[j]){
       cout<<ar1[i];
            i++;
            j++;

        }
        else if(ar1[i]<ar2[j]){
            i++;
        }
        else{
            j++;
        }

      } 
      
  }
    
    int main(){
    int s1=0;
    int s2=0;
    int ar1[10]={1,2,2,2,3,4,5,6,7,8};
    int ar2[8]={0,2,4,5,6,8,9,10};
  
   inter(ar1,ar2,10,8);

    
    return 0;
}
