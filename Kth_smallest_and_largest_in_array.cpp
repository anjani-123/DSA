// Find the Kth minimum and maximum element in array

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k_value;
    int arr[7] = {6, 1, 3, 5, 0, 8, 4};
    cout << "Enter the Kth value\n";
    cin >> k_value;
    sort(arr, arr+7);
    cout << arr[k_value-1];

    return 0;
}