#include<iostream>
using namespace std;
void reachHome(int src,int des){
    cout <<"source "<< src <<"destination "<< des<<endl;
    if(src==des){
        cout<<"phuch gaya"<<endl;
        return;
    }
    src++; // processing
    reachHome(src,des);// recursive call

}

int main(){
    int src=1;
    int des=10;
    cout<<endl;
    reachHome(src,des);
    return 0;

}