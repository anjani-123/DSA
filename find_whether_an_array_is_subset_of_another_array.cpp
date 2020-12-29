/*
Input: arr1[] = {11, 1, 13, 21, 3, 7}, arr2[] = {11, 3, 7, 1} 
Output: arr2[] is a subset of arr1[]

Input: arr1[] = {1, 2, 3, 4, 5, 6}, arr2[] = {1, 2, 4} 
Output: arr2[] is a subset of arr1[]

Input: arr1[] = {10, 5, 2, 23, 19}, arr2[] = {19, 5, 3} 
Output: arr2[] is not a subset of arr1[] 

We can also sort the array and then linerarly traverse the ararys and check
*/
#include<bits/stdc++.h>
using namespace std;

bool isSubset(int arr1[], int arr2[], int m, int n) 
{ 
	int i = 0; 
	int j = 0; 
	for (i = 0; i < n; i++) 
    { 
		for (j = 0; j < m; j++) 
        { 
			if (arr2[i] == arr1[j]) 
				break; 
		} 
        /* If the above inner loop was 
        not broken at all then arr2[i] 
        is not present in arr1[] */
		if (j == m) 
			return 0; 
	} 
	return 1; 
} 

int main() 
{ 
	int arr1[] = { 11, 1, 13, 21, 3, 7 }; 
	int arr2[] = { 11, 3, 7, 1 }; 

	int m = sizeof(arr1) / sizeof(arr1[0]); 
	int n = sizeof(arr2) / sizeof(arr2[0]); 

	if (isSubset(arr1, arr2, m, n)) 
		printf("arr2[] is subset of arr1[] "); 
	else
		printf("arr2[] is not a subset of arr1[]"); 

	getchar(); 
	return 0; 
} 
