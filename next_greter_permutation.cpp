/*
Input 1:
    A = [1, 2, 3]    Eg:- I/p - 1243  ---> 1342  ---> 1324 (O/p)
                     (While back traversing, We found 2 and swap 2 with it's just greater
                     element from right side i.e. 3)
                     Eg:- I/p - 1432  ---> 2431  ---> 2134 (O/p)
                     (While back traversing, We found 1 and swap 1 with it's just greater
                     element from right side i.e. 2)
Output 1:
    [1, 3, 2]
Input 2:
    A = [3, 2, 1]
Output 2:
    [1, 2, 3]
Input 3:
    A = [1, 1, 5]
Output 3:
    [1, 5, 1]
Input 4:
    A = [20, 50, 113]
Output 4:
    [20, 113, 50]
*/
// If the given array is in descending order then it's next permutation is not possible
// Just print in reverse order

#include<bits/stdc++.h>
using namespace std;

void next_permutation(int arr[], int n)
{
    int index = -1;
    for(int i=n-2; i>0; i--)
    {
        if(arr[i] < arr[i+1]) 
        {
            index = i;
            break;
        }
    }
    // If not find the next permutation and Return the reverse number
    int x, y;
    if(index == -1)  // Incase the array is sorted in dscending
    {
        x = 0;
        y = n-1;
        while(x<y)
        {
            swap(arr[x], arr[y]);
            x++;
            y--;
        }
        for(int j=0; j<n; j++)
        cout << arr[j] << " ";
    }
    
    //Find just greatest number to swap
    int mindiff = INT_MAX;
    int mindiffi = -1;
    for(int i=index+1;i<n; i++)
    {
        if(arr[i] > arr[index] && arr[i]-arr[index] < mindiff)
        {
            mindiff = arr[i] - arr[index];
            mindiffi = i;
        }
    }
    swap(arr[index], arr[mindiffi]);
    //Simply reverse the rest elements in right side
    x = index+1;
    y = n-1;
    while(x<y)
    {
        swap(arr[x], arr[y]);
        x++;
        y--;
    }
    for(int j=0; j<n; j++)
        cout << arr[j] << " ";

}

int main()
{
    int arr[4] = {1, 2, 4, 3};
    int n = 4;
    next_permutation(arr, n);
    return 0;
}