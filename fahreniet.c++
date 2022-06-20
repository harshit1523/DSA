#include<iostream>
using namespace std;

int main(){
    double fahr;
    cin >> fahr;
    double c = ((fahr - 32.0) * 5.0) / 9.0;
    cout << c;

    return 0;
}