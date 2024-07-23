#include <bits/stdc++.h>
using namespace std;

bool f(int ind, vector<int> &ds, int s, int sum, int arr[], int n)
{
    if (ind == n)
    {
        // condition satisfied
        if (s == sum)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl;
            return true;
        }
        else
            return false;
    }
    // include
    ds.push_back(arr[ind]);
    s += arr[ind];
    if (f(ind + 1, ds, s, sum, arr, n) == true)
    {
        return true;
    }
    s -= arr[ind];
    ds.pop_back();
    // exclude
    if (f(ind + 1, ds, s, sum, arr, n) == true)
    {
        return true;
    }

    return false;
}

int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    f(0, ds, 0, sum, arr, n);
    return 0;
}