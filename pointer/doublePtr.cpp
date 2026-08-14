#include<iostream>
using namespace std;
void update(int **ptr2){
   // ptr2=ptr2+1;
    //kuch change hoga??-- No,bcz ptr2 ia local copy of the variable 
   //*ptr2=*ptr2+1;
    //kuch change hoga??  -> yes
   **ptr2=**ptr2+1;
    //kuch change hoga??--> yes 
}
int main(){
    int i=10;
    int *ptr=&i;
    int **ptr2=&ptr;
    // cout<< "printing ptr : " << ptr << endl;
    // cout<<" address of ptr is " << &ptr << endl;
    // cout<< ptr2 << endl;
   /* cout<< i << endl;
    cout<< *ptr << endl;
    cout<< **ptr2 << endl;
    cout << &i <<endl;
    cout << ptr << endl;
    cout<< *ptr2 << endl;
    cout << &ptr << endl;
    cout << ptr2 << endl;
    */
     
    cout<< endl<<endl;
     cout<<"before"<<i << endl;
    cout<< "before"<<ptr << endl;
    cout<< "before" <<ptr2 << endl;
    update(ptr2);
    cout<<"after" << i<<endl;
    cout<< "after"<<ptr <<endl;
    cout<< "after" <<ptr2 << endl;


    return 0;

}