/*
arr[] = {1, 4, 45, 6, 0, 19}
   x  =  51
Output: 3
Minimum length subarray is {4, 45, 6}

arr[] = {1, 10, 5, 2, 7}
   x  = 9
Output: 1
Minimum length subarray is {10}

arr[] = {1, 11, 100, 1, 0, 200, 3, 2, 1, 250}
    x = 280
Output: 4
Minimum length subarray is {100, 1, 0, 200}

arr[] = {1, 2, 4}
    x = 8
Output : Not Possible
Whole array sum is smaller than 8.
*/
#include<bits/stdc++.h>
using namespace std;

int sum_value(int arr[], int n, int target_sum) //Returns length of required subarray
{
    int minlength = INT_MAX;
    for(int i=0; i<n; i++)
    {
        int sum = 0;
        for(int j=i; j<n; j++)
        {
            sum += arr[j];
            if(sum>target_sum)
            {
                minlength = min(minlength, j-i+1);
            }
        }
    }
    return minlength;
}
int main()
{
    int arr[6] = {1, 4, 45, 6, 0, 19};
    int n = 6;
    int targetsum = 51;
    int length = sum_value(arr, n, targetsum);
    cout << length;
    return 0;
}