// Move all the Negative numbers to the beginning and Positive numbers to the end
// One solution is to use sort(arr, arr+n) or Quick Sort

#include<bits/stdc++.h>
#define N 5
using namespace std;

/*int main()
{
    int arr[N] = {-1, 7, 5, -4, 6};
    int i = 0, j = N - 1;
    while(1)
    {
        if(arr[i] < 0  && i<j)
        i++;
        if(arr[j] > 0 && i<j)
        j--;
        if(i<j)
        swap(arr[i], arr[j]);
        else
        break;
    }
    for(int i=0; i< N; i++)
    cout << arr[i] << " ";

    return 0;
}*/

int main()
{
    int a = 5, b = 16;
    int min_val = min(a, b);
    int max_val = max(a, b);
    int hcf, lcm;
    /*for(int i=1; i<=min_val; i++)
    {
        if(a%i==0 && b%i==0)
        hcf = i;
    }*/


    cout << lcm << endl;
    return 0;
}
