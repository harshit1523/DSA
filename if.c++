#include<iostream>
using namespace std;

int main(){
    char ch;
    cin >> ch;
    if(ch>='a' && ch<='z'){
        cout << "lo" << endl;
    }
    else if(ch>='A'&& ch<='Z'){
        cout << "up" << endl;
    }
    else{
        cout << "nu"<<endl;
    }
    
    return 0;
}