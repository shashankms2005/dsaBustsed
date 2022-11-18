#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n,d,b=0;
int c;
cin>>n;
c=0;
while(n!=0){
    d=n%10;
    b=b+(d*(pow(2,c)));
    n=n/10;
    c++;
    
    
}
cout<<b<<endl;





    return 0;
}