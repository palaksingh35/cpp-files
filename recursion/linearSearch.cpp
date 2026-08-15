#include<iostream>
using namespace std;
bool linearSearch(int arr[],int size, int k){
    if(size == 0){
        return false;
    }if(arr[0]== k){
        return true;
    }else{
        int remainingPart= linearSearch(arr+1 , size-1,k);
        return remainingPart;
    }
}
int main(){
int arr[5]={2,3,5,6,4};
int size=5;
int k=2; 
int ans=linearSearch( arr, size, k);
if(ans){
    cout<<"key is found"<<endl;
}else{
    cout <<"key is not found";
}
}