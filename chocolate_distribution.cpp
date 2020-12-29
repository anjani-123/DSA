/*
Given an array of n integers where each value represents the number of chocolates 
in a packet. Each packet can have a variable number of chocolates. 
There are m students, the task is to distribute chocolate packets such that: 

Each student gets one packet.
The difference between the number of chocolates in the packet with maximum chocolates 
and packet with minimum chocolates given to the students is minimum.

Input : arr[] = {7, 3, 2, 4, 9, 12, 56} , m = 3 
Output: Minimum Difference is 2 
Explanation:
We have seven packets of chocolates and 
we need to pick three packets for 3 students 
If we pick 2, 3 and 4, we get the minimum 
difference between maximum and minimum packet 
sizes.

Input : arr[] = {3, 4, 1, 9, 56, 7, 9, 12} , m = 5 
Output: Minimum Difference is 6 
Explanation:
The set goes like 3,4,7,9,9 and the output 
is 9-3 = 6
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[8] = {1, 7, 9, 9, 12, 56, 4, 3};
    int n=8;
    int m = 4;
    sort(arr, arr+8);
    int min = INT_MAX;
    for(int i=0; i+m-1<n; i++)
    {
        int d = arr[i+m-1] - arr[i];
        if(d<min)
        min = d;
    }
    cout << min << endl;
    return 0;
}