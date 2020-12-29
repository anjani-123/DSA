#include<bits/stdc++.h>
using namespace std;

int max_product(int arr[], int n)
{
    int ma = arr[0];
    int mi = arr[0];
    int prod = arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]<0)
        swap(mi, ma);
        ma = max(arr[i], arr[i]*ma);
        mi = max(arr[i], arr[i]*mi);
        if(ma>prod)
        prod = ma;
    }
    return prod;
}

int main()
{
    int arr[5] = {6, -3, -10, 0, 2};
    int n=5;
    int result = max_product(arr, n);
    cout << result;
    return 0;
}