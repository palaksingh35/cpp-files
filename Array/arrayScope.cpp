#include<iostream>
using namespace std;
void update(int arr[],int n){
    cout<<"inside the function"<<endl;
    arr[1]={120};
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
    cout<<"going back to main function"<<endl;
}
    int main(){
        int arr[3]={2,3,4};
        update(arr,3);
        // printing the array 
        for(int i=0;i<3;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
return 0;

}
/*
in this the value in main is also changing because main is giving its address
to the update function thats why any change in update will change
in main function also
so in case of array we give address rather than copying it's value
*/
