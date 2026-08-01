#include<iostream>
using namespace std;
int getLength(char name[]){
    int count=0;
    for(int i=0;i<name[i]!=0;i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cin>> name;
    cout<<endl;
    cout<<name;
    cout<<"length of string is :"<< getLength(name)<<endl;
   return 0;

}