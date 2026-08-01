#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cin >>arr[i][j];
        sum=sum+arr[i][j];
        }
    }
    cout << "row wise sum is:" <<endl;
    cout << sum << endl;
    return 0;
}
// FOR COLOUMNN SUM FIRST RUN THE LOOP COLOUMN WISE SUM