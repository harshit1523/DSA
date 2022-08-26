#include<iostream>
using namespace std;
// void rowSum(int arr[][3],int row,int col){
//     for (int i = 0; i < 3;i++){
//         int sum = 0;
//         for (int j = 0; j < 3;j++){
//             sum+=arr[i][j];
//         }
//         cout << sum << " ";
//     }
// }
//for col wise
void colSum(int arr[][3],int row,int col){
    for (int j = 0; j < 3;j++){
        int sum = 0;
        for (int i = 0; i < 3;i++){
            sum+=arr[i][j];
        }
        cout << sum << " ";
    }
}
int main(){
    int arr[3][3];
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 3;j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 3;j++){
            cout<< arr[i][j]<<" ";
        }
        cout << endl;
    }
    // rowSum(arr, 3, 3);
    colSum(arr, 3, 3);
    return 0;
}