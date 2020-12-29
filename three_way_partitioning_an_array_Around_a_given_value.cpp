/*
Input: arr[] = {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32}  
        lowVal = 14, highVal = 20
Output: arr[] = {1, 5, 4, 2, 1, 3, 14, 20, 20, 98, 87, 32, 54}

Input: arr[] = {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32}  
       lowVal = 20, highVal = 20       
Output: arr[] = {1, 14, 5, 4, 2, 1, 3, 20, 20, 98, 87, 32, 54} 

Here, All values less than 14 (lowval) is left, Greater than 20 (highval) goes right 
and remaining at the middle.
*/
#include<bits/stdc++.h> 
using namespace std; 

void threeWayPartition(int arr[], int n, int lowVal, int highVal) 
{ 
	int start = 0, end = n-1; 
	for (int i=0; i<=end;)
	{ 
		if (arr[i] < lowVal) 
			swap(arr[i++], arr[start++]); 
		else if (arr[i] > highVal) 
			swap(arr[i], arr[end--]); 
		else
			i++; 
	} 
} 

int main() 
{ 
	int arr[] = {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	threeWayPartition(arr, n, 10, 20); 
	cout << "Modified array \n"; 
	for (int i=0; i<n; i++) 
		cout << arr[i] << " "; 
        return 0;
} 
