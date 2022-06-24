#include<iostream>
using namespace std;
long long int sqrtInt(int n){
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=n){
        long long int square=mid*mid;
        if(square==n){
            return mid;
        }
        if(square<n){
            ans=mid;
            mid=s-1;
        }
        else{
            mid=e-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
double morePrecision(int n,int precision,int tempSol){
    double factor = 1;
    for (int i = 0; i < precision;i++){
        factor = factor / 10;
        double ans = tempSol;
        for (double j = ans; j * j < n;j=j+factor){
            ans = j;
        }
    }
}
int main(){
    int n;
    cin >> n;
    
    int tempSol = sqrtInt(n);
    cout <<"Precision is"<< morePrecision(n, 3, tempSol) << endl;
    return 0;
}