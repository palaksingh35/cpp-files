#include<iostream>
using namespace std;
bool isSortedArr(int arr[],int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;}
    else{
         bool remainingPart=isSortedArr(arr+1,size-1);
         return remainingPart;
    }
}

int main(){
int arr[5]={2,3,5,6,4};
int size=5;
bool ans=isSortedArr(arr,size);
if(ans){
    cout<<"Array is sorted"<<endl;
}else{
   cout<<"not sorted";
}
  return 0;
}