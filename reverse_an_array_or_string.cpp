// Reverse the array of string or array

#include<bits/stdc++.h>
#define N 10
using namespace std;

int main()
{
    int arr[N] = {3, 6, 7, 1, 0, 77, 4, 6, 7, 2};
    int start = 0, end = N-1;
    while(start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "Reversed array is : " << endl;
    for(int i=0; i<N; i++)
    cout << arr[i] << " ";

    string s = "Anjani";
    int start = 0, end = s.size()-1;
    while(start < end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }
    cout << s;
    return 0;
}