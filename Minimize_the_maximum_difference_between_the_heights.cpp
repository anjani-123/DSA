// Minimize the difference between the heights of array elements
/*
Input  : arr[] = {1, 15, 10}, k = 6
Output :  Maximum difference is 5.
Explanation : We change 1 to 6, 15 to 
9 and 10 to 4. Maximum difference is 5
(between 4 and 9). We can't get a lower
difference.

Input : arr[] = {1, 5, 15, 10} 
        k = 3   
Output : Maximum difference is 8
arr[] = {4, 8, 12, 7}
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin >> arr[i];
    int k;
    cin >> k;
    for(int i=0; i<n; i++)
    {
        if(arr[i] < k)  {
        arr[i] += k;
        continue;    }
        else
        arr[i] -= k;
        continue;
    }
    int max_in_array = arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i] > max_in_array)
        max_in_array = arr[i];
    }
    int min_in_array = arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i] < min_in_array)
        min_in_array = arr[i];
    }
    cout << max_in_array - min_in_array;
    return 0;
}