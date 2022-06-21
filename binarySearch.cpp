#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int start = 0;
    int end = n - 1;
    int mid = start+(end-start) / 2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start = mid + 1;

        }
        else{
            end = mid - 1;
        }
        mid = start+(end-start) / 2;
    }
    return -1;
}
int main(){
    int even[6] = {2, 4, 6, 8, 12, 16};
    int odd[5] = {3, 4, 5, 11, 13};
    
    int evenindex = binarySearch(even, 6, 2);
    int oddindex = binarySearch(odd, 5, 11);
    cout << evenindex<<" for even"<<endl;
    cout << oddindex <<" for odd"<<endl;
    
    return 0;
}