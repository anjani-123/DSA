// Union and Intersection of two Sorted Arrays
#include<bits/stdc++.h>
using namespace std;

void printunion(int arr1[], int arr2[], int m, int n)
{
    int i=0, j=0;
    while(i<m && j<n)
    {
        if(arr1[i] < arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
        }
        else if(arr1[i] > arr2[j])
        {
            cout << arr2[j] << " ";
            j++;
        }
        else
        {
            cout << arr1[i++] << " ";
            j++;
        }   
    }
    while(i<m)
    cout << arr1[i++] << " ";
    while(j<n)
    cout << arr2[j++] << " ";
}

void print_intersection(int arr1[], int arr2[], int m, int n)
{
    int i=0, j=0;
    while(i<m && i< n)
    {
        if(arr1[i] < arr2[j])
        i++;
        else if (arr1[i] > arr2[j])
        j++;
        else  {
        cout << arr1[i] << " ";
        i++;
        j++;   }
        
    }
}

int main()
{
    int arr1[] = {1, 3, 4, 5, 7};
    int arr2[] = {2, 3, 5, 6};
    int m = 5;
    int n = 4;
    printunion(arr1, arr2, m, n);
    print_intersection(arr1, arr2, m, n);
    return 0;
}