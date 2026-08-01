// #include<iostream>
// using namespace std;



// int main(){
//     // DECLARING THE ARRAY
//     int arr[5];
//     // ACCCESING THE ARRAY 
//     cout<< arr[1]<<endl;
    
//     int second[4]={1,2,3,4};
//     int num=4;
//     // PRINTING THE ARRRAY
//    for(int i=0;i<num;i++){
//        // cout<< second[i]<<" ";
//     cout<< second[2]<<endl;
// }
// cout<<"\n"<<endl;
// int third[10]={2,3};
// int n=10;
// for(int i=0;i<n;i++){
//     cout<< third[i]<<" ";
// }
// cout<<"\n";
// // initializing all location with zero
// int fourth[15]={0};
// n=15;
// for(int i =0;i<n;i++){
//     cout<< fourth[i]<<" ";
// }
// }
#include<iostream>
 using namespace std;
void printArray(int arr[],int size){
    cout<<"printing the arrray"<<endl;
    //print the array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    // DECLARING THE ARRAY
    int arr[5];
    // ACCCESING THE ARRAY 
    cout<< arr[1]<<endl;
    
    int second[4]={1,2,3,4};
    int num=4;
    // PRINTING THE ARRRAY
    printArray(second,4);
   

cout<<"\n"<<endl;
int third[10]={2,3};
int n=10;
printArray(third,10);



// initializing all location with zero
int fourth[15]={0};
n=15;
printArray(fourth,15);

}
