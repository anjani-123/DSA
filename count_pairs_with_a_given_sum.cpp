// C++ implementation of simple method to find count of 
// pairs with given sum. 
#include <bits/stdc++.h> 
using namespace std; 

void getPairs(int arr[], int n, int sum) 
{ 
	// Consider all possible pairs and check their sums 
	for (int i=0; i<n; i++) 
		for (int j=i+1; j<n; j++) 
			if (arr[i]+arr[j] == sum) 
				cout << arr[i] << " " << arr[j] << endl;
} 

int main() 
{ 
	int arr[] = {1, 5, 7, -1, 5} ; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	int sum = 6; 
	getPairs(arr, n, sum); 
	return 0; 
} 
