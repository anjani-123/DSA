/*
Input: array = {12, 3, 4, 1, 6, 9}, sum = 24;
Output: 12, 3, 9
Explanation: There is a triplet (12, 3 and 9) present
in the array whose sum is 24. 

Input: array = {1, 2, 3, 4, 5}, sum = 9
Output: 5, 3, 1
Explanation: There is a triplet (5, 3 and 1) present 
in the array whose sum is 9.
*/
#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 
using namespace std; 

bool find3Numbers(int A[], int arr_size, int sum) 
{ 
	int l, r; 
	for (int i = 0; i < arr_size - 2; i++) 
	{ 
		for (int j = i + 1; j < arr_size - 1; j++) 
		{ 
			for (int k = j + 1; k < arr_size; k++) 
			{ 
				if (A[i] + A[j] + A[k] == sum) 
				{ 
					cout << "Triplet is " << A[i] << 
						", " << A[j] << ", " << A[k]; 
					return true; 
				} 
			} 
		} 
	} 

	// If we reach here, then no triplet was found 
	return false; 
} 

//2nd method

bool find3Numbers(int A[], int arr_size, int sum) 
{ 
	int l, r; 
	sort(A, A + arr_size); 
	// Now fix the first element one by one and find the other two elements 
	for (int i = 0; i < arr_size - 2; i++) 
    { 
        l = i+1;
		r = arr_size - 1;
		while (l < r) 
        { 
			if (A[i] + A[l] + A[r] == sum) 
            { 
				printf("Triplet is %d, %d, %d", A[i], 
					A[l], A[r]); 
				return true; 
			} 
			else if (A[i] + A[l] + A[r] < sum) 
				l++; 
			else
				r--; 
		} 
	} 

	// If we reach here, then no triplet was found 
	return false; 
} 

int main() 
{ 
	int A[] = { 1, 4, 45, 6, 10, 8 }; 
	int sum = 22; 
	int arr_size = sizeof(A) / sizeof(A[0]); 
	find3Numbers(A, arr_size, sum); 
	return 0; 
} 
