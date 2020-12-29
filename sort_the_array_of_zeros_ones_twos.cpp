// Sort the array of 0s, 1s and 2s
// One solution is to use sort(arr, arr+n)
// Other is to count the number of zero, one and two and place it in array.
// Other one is to make 1 as pivot and traverse the array, when 0 encountered,
// swap it left and if 2 encounters, move it right by just swapping.
#include<bits/stdc++.h>
#define N 12
using namespace std;

int main()
{
    int arr[N] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int low = 0, high = N-1, mid = 0;
    while(mid<=high)
    {
        switch(arr[mid])
        {
             case 0:
             swap(arr[mid], arr[low]);
             mid++;
             low++;
             break;

             case 1:
             mid++;
             break;

             case 2:
             swap(arr[mid], arr[high]);
             high--;
             break;
        }
    }

    for(int i=0; i<N; i++)
    cout << arr[i] << " ";
    return 0;
}