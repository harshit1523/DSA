#include<iostream>
using namespace std;
int Max(string s){
    int c[26];
    for (int j = 0; j <26;j++){
        c[j]= 0 ;
    }
    
    for (int i = 0; i <= s.size() - 1;i++){
        int g = int(s[i] - 'a');
        c[g]++;
    }
    int maxi = c[0];
    int m = 0;
    for (int k = 0; k < 26;k++){
        if(maxi<c[k]){
            maxi = c[k];
            m = k;
        }
    }
    int p = m + 'a';
    
    
    return p;
}
int main(){

    string s;
    cin >> s;
    cout << char(Max(s));
    return 0;
}