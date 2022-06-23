#include<iostream>
using namespace std;
int firstOcc(int arr[],int n,int key){
    int start = 0;
    int end = n - 1;
    int mid = start + ((end - start) / 2);
    int ans = -1;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid]<key){
            start = mid + 1;

        }
        else{
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
        
    }
    return ans;
}
int lastOcc(int arr[],int n,int key){
    int start = 0;
    int end = n - 1;
    int mid = start + ((end - start) / 2);
    int ans = -1;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid]<key){
            start = mid + 1;

        }
        else{
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
        
    }
    return ans;
}
int main(){
    int occu[5]={2,3,3,3,4};
    
    cout << "Index of first occurence of key is " << firstOcc(occu, 5, 3) << endl;
    cout << "Index of last occurence of key is " << lastOcc(occu, 5, 3) << endl;
    return 0;
}