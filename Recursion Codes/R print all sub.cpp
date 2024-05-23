#include <bits/stdc++.h>
using namespace std;

void f(int ind, vector<int> &ds, int s, int sum, int arr[], int n){
    if(ind == n){
        if(s == sum){
            for(auto it : ds){
                cout<< it << " ";
            }
            cout<< endl;
        }
        return;
    }
    // include
    ds.push_back(arr[ind]);
    s += arr[ind];
    f(ind +1, ds, s, sum, arr, n);
    s-= arr[ind];
    ds.pop_back();
    // exclude
    f(ind+1, ds, s, sum, arr, n);
}

int main(){
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector <int> ds;
    f(0, ds, 0, sum , arr, n);
    return 0;
}