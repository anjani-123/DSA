#include<bits/stdc++.h>
using namespace std;
//First 
// Second approach is that find sum of sub array elements and is the array of new sums are
// same means there will be elemnts between that whose sum is zero
// second edge case is that is sum=0 and third is that if elemnt in original array is 0
/*int main()
{
    int arr[5] = {4, 2, -3, 1, 6};
    int n = 5;
    int flag=0;
    for(int i=0; i<n; i++)
    {
        int sum=0;
        for(int j=i; j<n; j++)
        {
            sum = sum + arr[j];
            if(sum==0)
            {
                flag = 1;
                break;
            }
            if(flag==1)
            break;
        }
    }
        if(flag==1)
        cout << "Yes, Sum=0 is found!";
        else
        cout << "No";
    
    return 0;
}*/

int main()
{
    int arr[5] = {4, 2, -3, 1, 6};
    int res[5];
    int n = 5;
    int flag=0;
    int sum=0;
    unordered_map<int, int> m;
    for(int i=1; i<n; i++)
    {
        sum = sum + arr[i];
        if(sum==0 || m[sum] || arr[i]==0)
        {
            flag=1;
            break;
        }
        else
        m[sum]=1;
    }
    if(flag=1)
    cout << "Yes";
    else
    cout << "No";
    return 0;
}















//Practise Solution
/*int main()
{
    int arr[5] = {4, 2, -3, 1, 6};
    int res[5];
    int n = 5;
    int flag=0;
    int sum=0;
    for(int j=0; j<n; j++)
    {
        sum+=arr[j];
        res[j] = sum;
    }
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(res[i] == res[j] || res[i] == 0 || res[j]==0)
        {
            flag=1; 
            break;
        }
        i++;
        j--;
         
    }
    if(flag==1)
    cout << "Yes";
    else
    cout << "No";
    return 0;
}*/


