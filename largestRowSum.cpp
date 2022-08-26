#include <iostream>
using namespace std;
int largestRowSum(int arr[][3], int row, int col)
{
    
        int maxi = INT_FAST8_MIN;
        int rowIndex = -1;
        for (int i = 0; i < 3; i++)
        {
            int sum = 0;
            for (int j = 0; j < 3; j++)
            {
                sum += arr[i][j];
            }
            if(sum>maxi){
                maxi = sum;
                rowIndex = i;
            }
        }
        cout << "max sum:" << maxi<<endl;
        return rowIndex;
}
int main()
{
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
    int ans = largestRowSum(arr, 3, 3);
    cout << "largest row sum is at index: " << ans;

    return 0;
}