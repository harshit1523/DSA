#include<iostream>
using namespace std;
bool isEven(int a){
    if (a&1){
        return 0;

    }
    else{
        return 1;
    }
}
int main(){
    int a;
    cin >> a;
    if (isEven(a)){
        cout << "even";
    }
    else{
        cout << "odd";
    }

    return 0;
}