#include<iostream>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;

  //CREATING 2D ARRAY DYNAMICLLY
int **arr=new int*[row];
for(int i=0;i<row;i++){
    arr[i]=new int[col];
}
cout<<endl;

//INPUTING
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>arr[i][j];
    }
}
cout<<endl;

//OUTPUTTING
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

//deleting 2d array
for(int i=0;i<row;i++){
    delete []arr[i];
}
delete []arr;
}
/*    CREATING JAGARDED 2D ARRAY DYNAMICLLY      
int row;
cin>>row;
 
int **arr=new int*[row];
int *sizes=new int[row];
for(int i=0;i<row;i++){
    cout<<" enter size of each sub array"<<endl;
    cin>>sizes[i];
    arr[i]=new int[sizes[i]];
}
cout<<endl;

//INPUTING
for(int i=0;i<row;i++){
    for(int j=0;j<sizes[i];j++){
        cin>>arr[i][j];
    }
}
cout<<endl;

//OUTPUTTING
for(int i=0;i<row;i++){
    for(int j=0;j<sizes[i];j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

//deleting 2d array
for(int i=0;i<row;i++){
    delete []arr[i];
}
delete []arr;

    return 0;
}
*/