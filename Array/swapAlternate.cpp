#include<iostream>
using namespace std;

void reverseAlternate(int arr[],int n){
    int start=0;
    while(start<n-1){
        swap(arr[start],arr[start+1]);
        start+=2;
    }
}
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[5]={1,2,3,4,5};
    reverseAlternate(arr,5);
    printArray(arr,5);
}