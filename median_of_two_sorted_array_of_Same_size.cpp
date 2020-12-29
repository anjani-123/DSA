//This code is for both Median of two sorted arrays of same as well as different sizes
/*
Input1 :- {1, 12, 15, 26, 38}
Input2 :- {2, 13, 17, 30, 45}
O/p = 16
Expalnation :- After merging :- {1, 2, 12, 13, 15, 17, 26, 30, 38, 45}
Median = (15+17)/2 = 16
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[5] = {1, 12, 15, 26, 38};
    int arr2[5] = {2, 13, 17, 30, 45};
    int arr3[10];
    int n1 = 5;
    int n2 = 5;
    int i = 0, j = 0, k=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i] < arr2[j]) 
        arr3[k++] = arr1[i++];  
        else                
        arr3[k++] = arr2[j++];
    }
    while(i<n1)
    arr3[k++] = arr1[i++];
    while(j<n2)
    arr3[k++] = arr2[j++];
    //Now find the Avg. of 5th and 6th element's value
    return 0;
}   
