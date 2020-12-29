/*
Given an array of size n, find all elements in array that appear more than n/k times. 
For example, if the input arrays is {3, 1, 2, 2, 1, 2, 3, 3} and k is 4, then the output 
should be [2, 3]. Note that size of array is 8 (or n = 8), so we need to find all 
elements that appear more than 2 (or 8/4) times. There are two elements that appear
more than two times, 2 and 3. 
*/
//To solve this, we sort the array and count the occurences of each element and then check

#include<bits/stdc++.h>
using namespace std;

void result(int arr[], int n, int k)
{
    int arr1[100], c=0;
    for(int i=0; i<n; i++)
    {
        c = 1;
        if(arr[i]!=-1)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[i]==arr[j])
                {
                    c++;
                    arr[j] = -1;
                }
            }
            arr1[i] = c;
        }
    }
    /*for(int i=0; i<n; i++)
    {
        if(arr[i]!=-1)
        cout << arr[i] << " "  << "occurs" << arr1[i] << " " << "times" << endl;
    }*/
    int ind = n/k;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << endl;
        cout << arr1[i] << endl;
    }
}

int main()
{
    int arr[8] = {3, 1, 2, 2, 1, 2, 3, 3};
    sort(arr, arr+8);
    result(arr, 8, 4);
    return 0;
}