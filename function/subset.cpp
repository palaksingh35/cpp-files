#include<iostream>
using namespace std;
int setBit(int a ,int b){
    int bit =((a&1) || (b&1));
    return bit;

}
int main(){
    int a ,b;

    cin>>a>>b;
  int bit=  setBit(a,b);
     cout<<bit<<endl;

}