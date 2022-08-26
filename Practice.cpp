#include<iostream>

using namespace std;
bool ispresent(int arr[][4],int target,int i,int j){
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 4;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
        
    }
    return 0;
}
int rowsum(int arr[][4],int i,int j){
    int max=0;
    int maxindex;
    for (int i = 0; i < 3;i++){
        int sum = 0;
        for (int j = 0; j < 4;j++){
            sum = sum + arr[i][j];
        }
        
        if(sum>max){
            max = sum;
            maxindex = i;
        }
    }
    return maxindex;
}
// int colsum(int arr[][4],int i,int j){
   
//     for (int j= 0; j < 4;j++){
//         int sum = 0;
//         for (int i= 0; i < 3;i++){
//             sum = sum + arr[i][j];
//         }
//         cout << sum << endl;
//     }
    
// }
int main(){
    int arr[3][4]; 
    for (int i = 0; i < 4;i++){
        for (int j = 0; j < 3;j++){
            cin >> arr[j][i];
        }
    }

    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 4;j++){
            cout<< arr[i][j]<<" ";
        }
        cout << endl;
    }
    // int target;
    // cin >> target;
    // if(ispresent(arr,target,3,4)){
    //     cout << "f";
    // }
    // else{
    //     cout << "n";
    // }
    cout<<rowsum(arr, 3, 4);
    // colsum(arr, 3, 4);

    return 0;
}