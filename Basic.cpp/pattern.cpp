// #include<iostream>
// using namespace std;
// int main(){
//     int n; 
//     int count =1;
//     cin>> n;
//     for(int i=1; i<=n; i++){
//         for(int j = 1; j<=n;j++){
            
//           cout<<count<<" ";
//           count ++;
          
//         }
        
        
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n; 
    
//     cin>> n;
//     for(int i=1; i<=n; i++){
//         int start = i*n;
//         for(int j = 1; j<=n;j++){
            
//           cout<<start<<" ";
//           start--;
          
//         }
        
        
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n; 
    
//     cin>> n;
//     for(int i=1; i<=n; i++){
        
//         for(int j = 1; j<=i;j++){
            
//           cout<< "*"<<" ";
          
          
//         }
        
        
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n; 
//      int count=1;
//     cin>> n;
//     for(int i=1; i<=n; i++){
        
//         for(int j = 1; j<=i;j++){
            
//          cout<< count<<" ";
//           count++;
         //cout<< i <<" ";
         //cout<< j <<" ";
          
       // }
        
        
       // cout<<endl;
  //  }
//}
// #include<iostream>
// using namespace std;
// int main(){
//     int n; 
//      //int count=1;
//     cin>> n;
//     for(int i=1; i<=n; i++){
        
//         for(int j = 1; j<=i;j++){
//             cout<< i-j+1<<" ";
        
//         }
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n; 
//      //int count=1;
//     cin>> n;
//     for(int i=1; i<=n; i++){
        
//         for(int j = 1; j<=i;j++){
//             char ch = 'A'+i+j-2;
//             cout<< ch <<" ";
        
//         }
//         cout<<endl;
//     }
// }
#include<iostream>
using namespace std;
int main(){
    int n; 
     //int count=1;
    cin>> n;
    for(int i=1; i<=n; i++){
        
        for(int j = 1; j<=i;j++){  
            char ch = 'D'-i+j; // 
            cout<< ch <<" ";
        
        }
        cout<<endl;
    }
}