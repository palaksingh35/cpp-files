#include<iostream>
using namespace std;
void reverseStr(string& str,int i ,int j){
    // base case
    if(i>j){
        return;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    
   reverseStr(str,i , j); // recursive fn

}
int main(){
    string name= "palak";
    reverseStr(name,0,name.length()-1);
    cout << name<< endl;
    return 0;
}