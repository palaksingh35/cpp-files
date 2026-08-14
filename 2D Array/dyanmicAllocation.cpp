#include<iostream>
using namespace std;
int main(){
     int n;
     cin>>n;
     // creating 2-d array dynamically
     int **arr=new int*[n]; /// creating array of pointers
     for(int i=0 ;i<n;i++){
        arr[i]=new int[n]; // creating array of integers
       

     }
     // taking input in 2-d array
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
     }
     // printing the array
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
     // memory releasing
     for(int i=0;i<n;i++){
        delete[] arr[i];
     }
     delete[] arr;
}