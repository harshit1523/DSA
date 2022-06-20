#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a;
    cin >> b;
    char op;
    cin >> op;
    switch(op){
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a *b << endl;
            break;
        case '/':
            cout << a / b << endl;
            break;
        case '%':
            cout << a % b << endl;
            break;
        default:
            cout << "plz type valid op" << endl;
    }
    return 0;
}