// Merge two sorted Arrays with O(1) extra space
#include<bits/stdc++.h>
using namespace std;

void merge_array(int arr1[], int arr2[], int n, int m)
{
    int i=n-1, j=0;
    while(i>0 && j<m)
    {
        if(arr1[i] >= arr2[j])
        {
            swap(arr1[i], arr2[j]);
            i--;
            j++;
        }
        else
        break;
    }
    sort(arr1, arr1+n);
    sort(arr2, arr2+m);

    for(int i=0; i<n; i++)
    cout << arr1[i] << " ";
    for(int j=0; j<m; j++)
    cout << arr2[j] << " ";
}

int main()
{
    int arr1[4] = {1, 3, 5, 7};
    int n = 4;
    int arr2[5] = {0, 2, 6, 8, 9};
    int m = 5;
    merge_array(arr1, arr2, n, m);
    return 0;
}