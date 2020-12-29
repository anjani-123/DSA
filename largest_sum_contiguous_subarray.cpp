// Largest sum contiguous sub array using Kadane's Algo
#include<bits/stdc++.h>
using namespace std;
// Kadane's Algo (Optimised Solution)
int maxsum(int arr[], int n)
{
    int max_so_far = INT_MIN;
    int max_ending_here = 0;
    for(int i=0; i<n; i++)
    {
        max_ending_here = max_ending_here + arr[i];
        if(max_ending_here > max_so_far)
        max_so_far = max_ending_here;
        if(max_ending_here < 0)  //If -ve value gets, make it 0
        max_ending_here = 0;
    }
    return max_so_far;
}

// o(n^2 solution)

/*int maxSum(int arr[],int n )
{
    int i,j,sum,maxSum;
    maxSum = 0;
    for(i = 0;i<n;i++)
    {
        sum = 0;               //Previous sum array
        for(j=i;j<n;j++)  
        {
            sum = sum + arr[j];
            if(sum>maxSum)
                maxSum = sum;
        }
    }
    return maxSum;
}*/


/*int maxsum(int arr[], int n)
{
    int maxsum = INT_MIN;
    for(int i=1; i<n; i++)
    {
        for(int j=i; j<=n;j++)
        {
            int sum = 0;
            for(int k=i; k<=j; k++)
            sum += arr[k];
            if(sum>maxsum)
            maxsum = sum;
        }
    }
    return maxsum;
}*/



int main()
{
    int arr[10] = {11, -12, 15, -3, 8, -9, 1, 8, 10, -2};
    int n = 10;
    int value = maxsum(arr, n);
    cout << "The max sum is " << " " << value;
    return 0;
}

