#include<iostream>
#include<cmath>
using namespace std;
/*int poww(int n,int i){
    if(n==0)
    return 0;
   return n%10*pow(2,i)+poww(n/10,++i);
}
*/
int poww(int,int,int&);
int main(){
    int n;
    int i=0;
    cout<<"entre binary ele: "<<endl;
    cin>>n;
    int a=0;
    poww(n,i,a);
    cout<<a;
    return 0;
}
int poww(int n,int i,int &a){
    if(n==0)
    return 0;

    int digit=n%10;
      a+=digit*pow(2,i);
     i++;
     return poww(n/10,i,a);
}