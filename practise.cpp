#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 6;
    int arr[6] = {4, 13, 5, 7, 1, 15};
    int mini = arr[0];
    int i;
    int min_index = 0;
    for(i=1; i<n; i++)         //Finding min value
    {
        if(mini > arr[i])  {
        mini = arr[i];
        min_index = i;     }
    }
    int large = arr[min_index];
    for(int j=min_index+1; j<n; j++)     //Find max value
    {
        if(large < arr[j])
        large = arr[j];
    }
    cout << large - arr[min_index] << endl;
    return 0;
}