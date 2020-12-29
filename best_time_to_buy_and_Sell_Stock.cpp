#include<bits/stdc++.h>
using namespace std;

/*
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
*/





/*int result(int prices[], int n)
{
    int mini = prices[0];
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        if(prices[i] < mini)
            mini = prices[i];
       else
       ans = max(ans, prices[i] - mini);
    }
    return ans;
}*/

/*
Calaculate the minimum in an array and find the difference with each 
element and find the maxiumum difference
*/


int result(int prices[], int n)
{
    int maxcost = 0, cost;
    int min_price = prices[0];
    for(int i=0; i<n; i++)
    {
        min_price = min(min_price, prices[i]);
        cost = prices[i] - min_price;
        maxcost = max(maxcost, cost);
    }
    return maxcost;
}

int main()
{
    int prices[6] = {7, 1, 5, 3, 6, 4};
    int n = 6;
    int answer = result(prices, 6);
    cout << answer;
    return 0;
}