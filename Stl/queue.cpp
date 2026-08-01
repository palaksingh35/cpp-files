// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     queue<string>q;
//     q.push("love");
//     q.push("palak");
//     q.push("singh");
//     cout<<"first element is"<<q.front()<<endl;
//     cout<<"size before pop"<<q.size()<<endl;

//     q.pop();
//     cout<<"first element is"<<q.front()<<endl;
//     cout<<"size after pop"<<q.size()<<endl;

// }
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    priority_queue<int, vector<int>,  greater<int> >mini;
    mini.push(5);
    mini.push(4);
    mini.push(2);
    mini.push(1);
    mini.push(7);
    int m= mini.size();
    for(int i=0;i<m;i++){
        cout<< mini.pop()<<" ";
        mini.pop();
          
    }
    cout<<endl;

    
}