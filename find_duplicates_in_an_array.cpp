// Find duplicates from an array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6] = {6, 8, 1, 6, 5, 1};
    int n = 6;
    /*for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            cout << arr[i];
        }
    }*/
    sort(arr, arr+n);
    int i=0, j=1;
    while(i<j)
    {
        if(arr[i] == arr[j])
        cout << arr[i] << " ";
        break;
        i++;
        j++;
    }

    return 0;
}