#include<bits/stdc++.h>
using namespace std;
//Idea is to place all positive element at first and send all -ve elements to right
// and place one +ve and one -ve number side by side
int main()
{
    int arr[6] = {2, 3, -4, -1, 6, -9};
    int n = 6;
    int i=0, j=n-1;
    while(i<=j)
    {
        if(arr[i]<0 && arr[j]>0)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        else if(arr[i]>0 && arr[j]<0)
        {
            i++;
            j--;
        }
        else if(arr[i]>0)
        i++;
        else if(arr[j]>0)
        j--;
    }
    if(i==0 || i==n)
    {
        for(int i=0; i<n; i++)
        cout << arr[i] << "";
    }
    else
    {
        int k=0;
        while(k<n && i<n)
        {
            swap(arr[k], arr[j]);
            k = k+2;
            i++;
        }
        for(int i=0; i<n; i++)
        cout << arr[i] << "";
    }
    return 0;
}