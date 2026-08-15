#include<iostream>
using namespace std;
void print(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout <<arr[i];
    }
}
bool binarySearch(int *arr ,int s,int e,int size,int k ){
    cout <<endl;
    print(arr,s,e);
    if(s>e)
        return false;
        int mid=s+(e-s)/2;
        cout << endl;
        cout <<"mid element is "<< arr[mid]<< endl;
        if(arr[mid]==k){
            return true;
        }
    
    if(arr[mid]<k){
        binarySearch(arr,mid+1,e,size,k);
    }else{
        binarySearch(arr,s,mid-1,size,k);
    }
}
int main(){
    int arr[6]= {2,4,5,8,10,11};
    int size=6;
    int key=1;
    cout << "found or not -> "<<binarySearch(arr,0,5,6,1);
    

    return 0; 

}