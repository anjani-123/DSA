/*
Input: prices[] = {3, 3, 5, 0, 0, 3, 1, 4} 
Output: 6 
Explanation: 
Buy on Day 4 and Sell at Day 6 => Profit = 3 0 = 3 
Buy on Day 7 and Sell at Day 8 => Profit = 4 1 = 3 
Therefore, Total Profit = 3 + 3 = 6

Input: prices[] = {1, 2, 3, 4, 5} 
Output: 4 
Explanation: 
Buy on Day 1 and sell at Day 6 => Profit = 5 1 = 4 
Therefore, Total Profit = 4 
*/
//Idea here is to make a dot plot of array prices and then visualize it 
//This is also valley peak problem

#include<bits/stdc++.h>
using namespace std;

int maxprofit(int arr[], int n)
{
    int diff = 0;
    for(int i=0; i<n-1; i++) //Excluding the last element as we cannot buy on that day
    {
        if(arr[i] < arr[i+1])
        diff += arr[i+1] - arr[i];
    }
    return diff;
}
int main()
{
    int arr[8] = {3, 3, 5, 0, 0, 3, 1, 4};
    int n = 8;
    int result = maxprofit(arr, n);
    cout << result;
    return 0;
}