// Find the minimum and maximum element in array

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {6, 7, 2, 4, 1};
    sort(arr, arr+5);
    cout << "Min element is" << " " << arr[0] << endl;
    cout << "Max element is" << " " << arr[4] << endl;

    return 0;
}