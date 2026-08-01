#include<iostream>
using namespace std;
bool isPresent(int arr[][3],int target, int row ,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >>arr[i][j];
        }
    }
    int target;
    cin >> target;
    if(isPresent(arr, target, 3, 3)){
        cout << "Element found" << endl;
    }
    else{
        cout << "Element not found" << endl;
    }
    return 0;
}