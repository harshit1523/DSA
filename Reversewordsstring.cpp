#include<iostream>
using namespace std;
char rev(char s,int n){
    int start = 0;
    int end = n - 1;
    for (int i = 0; i <= end;i++){
        swap(s[start], s[end]);
    }
    return s;
}
int main(){
    int i;
    cin >> i;
    char s[i];
    cin.getline(s,i);
    char g = rev(s, i);
    cout << g;
    return 0;
}