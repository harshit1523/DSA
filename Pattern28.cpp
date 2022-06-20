#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n-i+1){
            cout << j;
            j++;
        }
        int start = i - 1;
        while(start){
            cout << "*";
            start--;
        }
        int anstart = i - 1;
        while(anstart){
            cout << "*";
            anstart--;
        }
        int k = n - i + 1;
        while(k){
            cout << k;
            k--;
        }
        cout << endl;
        i++;
    }
    return 0;
}