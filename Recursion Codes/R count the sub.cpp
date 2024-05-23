#include <bits/stdc++.h>
using namespace std;

int f(int ind, int s, int sum, int arr[], int n){
    if(ind == n){
        // condition satisfied
        if(s == sum){
            return 1;
        }
        else return 0;
    }
    // include
    s += arr[ind];
    int l = f(ind +1, s, sum, arr, n);
    
    s-= arr[ind];
    
    // exclude
    int r = f(ind+1, s, sum, arr, n);
    
    return l + r;
}

int main(){
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    //vector <int> ds;
    cout << f(0, 0, sum , arr, n);
    return 0;
}