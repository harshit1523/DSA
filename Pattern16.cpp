#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int i = 1;
//     char c = 'A';
//     while(i<=n){
//         int j = 1;
      
//         while(j<=i){
            
//             cout << c;
            
//             j = j + 1;
//         }
//         c++;
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }


int main(){
    int n;
    cin >> n;
    int i = 1;
    
    while(i<=n){
        int j = 1;
      
        while(j<=i){
            char c = 'A' + i - 1;
            cout << c;
            
            j = j + 1;
        }
        
        cout << endl;
        i = i + 1;
    }
    return 0;
}