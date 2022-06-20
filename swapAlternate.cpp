#include<iostream>
using namespace std;
void print(int arr[],int n){
    for (int i = 0; i < n;i++){
        cout << arr[i]<<" ";
    }
}
void swap(int arr[],int n){
    for (int i = 0; i < n;i+=2){
        if(i+1<n){
            swap(arr[i], arr[i + 1]);
            //or
            //int temp = arr[i + 1];
            //arr[i + 1] = arr[i];
            //arr[i] = temp;
        }
    }
}
int main(){
    int arr[6] = {0, 5, 4, 3, 8, 2};
    swap(arr, 6);
    print(arr, 6);
    return 0;
}