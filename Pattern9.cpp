#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 1;
    int count = 0;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout << i + count;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}