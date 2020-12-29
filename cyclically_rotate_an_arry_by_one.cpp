// Cyclically Rotate an array clockwise by one means last element becomes first and all
// elements shift right by one
// Input:  arr[] = {1, 2, 3, 4, 5}
// Output: arr[] = {5, 1, 2, 3, 4}
// Store last element and make it the first element and shift other elements to one 
// right
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6] = {4, 6, 1, 7, 1, 9};
    int n = 6;
    int first_index_val = arr[n-1]; 

    for(int i=n-1; i>0; i--)
    arr[i] = arr[i-1];

    arr[0] = first_index_val;

    for(int i=0; i<n; i++)
    cout << arr[i] << " ";

    return 0;
}