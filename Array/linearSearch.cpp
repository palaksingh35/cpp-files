#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
       
    }
     return 0;

}
int main(){
    int arr[10]={1,-2,4,5,6,7,5,4,2,3};
    int key;
    cin>>key;
    bool found=search(arr,10,key);
    if(found){

    cout<<"key element is found"<<endl;
}else{
cout<<"key is not found"<<endl;
}
return 0;
}