#include<iostream>
using namespace std;
int fact(int n){
    //base case
    if(n==0)
        return 1;

    //recursive relation
   int smallproblem=fact(n-1);
    int biggproblem=n*smallproblem;

    return biggproblem;   
  
}

int pow(int x,int m){
    //base case
    if(m==0)
    return 1;

    //recursion relation
    return x*pow(x,m-1);
}
int main(){
    int n,m,x;
    cout<<"enter a val to find factorial: "<<endl;
    cin>>n;
    int ans1=fact(n);
    cout<<"factorial of"<<n<<": "<<ans1<<endl;
    cout<<endl;

    cout<<"enter num and its m to find pow: "<<endl;
    cin>>x;
    cin>>m;
    int ans2=pow(x,m);
    cout<<"pow of "<<x<<"to the power of "<<m<<" is: "<<ans2;
    return 0;
}