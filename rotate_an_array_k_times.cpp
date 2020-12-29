#include<bits/stdc++.h>
using namespace std;

void rotate_by_one(int arr[], int n)
{
    int last_num = arr[n-1];
    for(int i=n-1; i>=0; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[0] = last_num;
}

void rotate_k_times(int arr[], int n, int k)
{
    for(int i=0; i<k; i++)
    rotate_by_one(arr, n);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 2;
    rotate_k_times(arr, n, k);
    for(int i=0; i<n; i++)
    cout << arr[i] << " ";
    return 0;
}