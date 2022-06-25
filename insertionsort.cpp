#include<iostream>
using namespace std;
int insertionSort(int n, int arr){
    // Write your code here.
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            
        }
        arr[j+1]=temp;
        
    }
}


int main(){
    int ar[7]={10,1,7,4,8,2,11};
    cout << insertionSort(7, ar);
    return 0;
}