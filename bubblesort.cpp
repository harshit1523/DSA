#include<iostream>
using namespace std;
int bubbleSort(int arr[], int n)
{   
    // Write your code here.
    for(int i=1;i<n;i++){
        bool swapped=false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }
    return arr;
}

int main(){
    int a[5] = {4, 3, 2, 6, 7};
    cout << bubbleSort(a, 5);
    return 0;
}