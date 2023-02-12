#include<iostream>
using namespace std;
void print(int *arr,int size){
    cout<<"size of array : "<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void print2(int *arr,int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool checksortedarray(int *arr,int size){
    //base case
    if(size==0 || size==1)
    return true;

    if(arr[0]>arr[1])
    return false;
    else{
        bool ans=checksortedarray(arr+1,size-1);
    return ans;
    }
}

bool linearsearch(int *arr,int size,int k){
    print(arr,size);
    //base case
    if(size==0)
    return false;

    if(arr[0]==k)
    return true;
    else{
        bool ans=linearsearch(arr+1,size-1,k);
        return ans;
    }

}

bool binarysearch(int arr[],int size,int s,int e,int k){
    print2(arr,s,e);
     //base case
    if(s>e)
    return false;
    int mid=s+(e-s)/2;
    if(arr[mid]==k)
    return true;

        if(arr[mid]>k){
        return binarysearch(arr,size,s,mid-1,k);
        }else{
            return binarysearch(arr,size,mid+1,e,k);
        }
    
}


int main(){
    int arr[100];
    int size;
    cout<<"enter size and ele : "<<endl;
    cin>>size;
    cout<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
    bool a1=checksortedarray(arr,size);
    if(a1){
        cout<<"array is sorted "<<endl;
    }else{
        cout<<"not sorted "<<endl;
    }

   int arr2[100];
    int size2;
    cout<<"enter size2 and ele2 : "<<endl;
    cin>>size2;
    cout<<endl;
    for(int i=0;i<size2;i++){
        cin>>arr2[i];
    }
    cout<<endl;
    cout<<"enter key: "<<endl;
    int k2;
    cin>>k2;
    cout<<endl;
    bool a2=linearsearch(arr2,size2,k2);
    if(a2){
        cout<<"ele found "<<endl;
    }else{
        cout<<"not found "<<endl;
    }


       int arr3[100];
    int size3;
    int s,e;
    cout<<"enter size3 , ele3 and starting and ending index: "<<endl;
    cin>>size3;
    cout<<endl;
    for(int i=0;i<size3;i++){
        cin>>arr3[i];
    }
    cout<<endl;
    cin>>s;
    cin>>e;
    cout<<endl;
    cout<<"enter key: "<<endl;
    int k;
    cin>>k;
    cout<<endl;
    bool a3=binarysearch(arr3,size3,s,e,k);
    if(a3){
        cout<<"ele found "<<endl;
    }else{
        cout<<"not found "<<endl;
    }
    return 0;
}