#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int>a(5,1);// if we know the size of the vector we can initialize like this tje size is 5 and starts with 1
    
     cout<<"capacity->"<<v.capacity()<<endl;
     // capacity tells how much place assign to the vector
     v.push_back(1);
     cout<<"capacity->"<<v.capacity()<<endl;
     v.push_back(2);
    cout<<"capacity->"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"capacity->"<<v.capacity()<<endl;
    // we can also check value at index as we were doing in aaray
    cout<<"element at 2nd index "<<v.at(2)<<endl;
    cout<<"front"<<v.front()<<endl;
     cout<<"back"<<v.back()<<endl;
 // pop up- removing the last element
     cout<< "before pop "<<endl;
     for(int i:v){
        cout<<i<<" ";

     }
     cout<<endl;
     v.pop_back();
     cout<<"after pop"<<endl;
     for(int i:v){
        cout<<i<<" ";
     }
     cout<<endl;
     cout<<"before clear size"<<v.size()<<endl;
     v.clear();
      cout<<"after clear size"<<v.size()<<endl;
}