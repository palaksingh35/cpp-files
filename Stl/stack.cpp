#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("love");
    s.push("palak");
    s.push("singh");
    cout<<"Top element:"<<s.top()<<endl;
    s.pop();
     cout<<"size of stack:"<<s.size()<<endl;
      cout<<"empty or not :"<<s.empty()<<endl;


}
