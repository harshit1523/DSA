#include<iostream>
using namespace std;
int selectionSort(int arr, int n){   
    
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
            
        }
        swap(arr[minIndex],arr[i]);
    }
    return arr;
}
int main(){
    int arr[5] = {4, 3, 53, 41, 2};
    int p = selectionSort(arr, 5);
    cout << "Sorted array is" << p;
    return 0;
}