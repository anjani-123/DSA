#include<bits/stdc++.h>
using namespace std;

/*int main()
{
    int n;
    cin >> n;
    int a[1000] = {0};
    int end = 0, carry = 0;
    a[0] = 1;
    for(int i=2; i<=n; i++)
    {
        for(int j=0; j<=end; j++)
        {
            int mul = a[j] * i + carry;
            a[j] = mul%10;
            carry = mul/10;
        }
        while(carry!=0)
        {
            end++;
            a[end] = carry % 10;
            carry/= 10;
        }
    }
    for(int i=end; i>=0; i--)
    cout << a[i];

    return 0;
}





#include<iostream> 
using namespace std; 
#define MAX 500 

int multiply(int x, int res[], int res_size); 

void factorial(int n) 
{ 
	int res[MAX]; 
	res[0] = 1; 
	int res_size = 1; 

	// Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n 
	for (int x=2; x<=n; x++) 
		res_size = multiply(x, res, res_size); 

	cout << "Factorial of given number is \n"; 
	for (int i=res_size-1; i>=0; i--) 
		cout << res[i]; 
} 

// This function multiplies x with the number 
// represented by res[]. 
// res_size is size of res[] or number of digits in the 
// number represented by res[].
// This function may value of res_size and returns the 
// new value of res_size 

int multiply(int x, int res[], int res_size) 
{ 
	int carry = 0; // Initialize carry 

	// One by one multiply n with individual digits of res[] 
	for (int i=0; i<res_size; i++) 
	{ 
		int prod = res[i] * x + carry; 

		// Store last digit of 'prod' in res[] 
		res[i] = prod % 10; 

		// Put rest in carry 
		carry = prod/10;	 
	} 

	// Put carry in res and increase result size 
	while (carry) 
	{ 
		res[res_size] = carry%10; 
		carry = carry/10; 
		res_size++; 
	} 
	return res_size; 
} 

// Driver program 
int main() 
{ 
	factorial(100); 
	return 0; 
} 
*/

