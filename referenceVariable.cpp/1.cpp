#include <iostream>
using namespace std;
void update(int n){
    n++;
}
void update2(int &n){
    n++;
}

int main() {
    // int x = 10;
    // int& ref = x;  // ref is a reference to x
    // cout << "Value of x: " << x << endl;
    // cout << "Value of ref: " << ref << endl;
    // ref = 20;  // This will modify the value of x
    // cout << "Value of x after modifying ref: " << x << endl;
    // x++;
    // cout<< x << endl;
    int n=5;
    cout<<"before "<< n<< endl;
    update(n);
    cout<<"after update "<< n<< endl;
    update2(n);
    cout<<"after update2-> "<< n<< endl;
    return 0;
}