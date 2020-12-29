/*
Given a string s1 and a string s2, write a snippet to say whether s2 is a 
rotation of s1?
(eg given s1 = ABCD and s2 = CDAB, return true, given s1 = ABCD, and s2 = ACBD , 
return false)
*/

# include <bits/stdc++.h> 
using namespace std; 

bool areRotations(string str1, string str2) 
{ 
if (str1.length() != str2.length()) 
		return false; 

string temp = str1 + str1; 
return (temp.find(str2) != string::npos); 
} 

/* Driver program to test areRotations */
int main() 
{ 
string str1 = "AACD", str2 = "ACDA"; 
if (areRotations(str1, str2)) 
	printf("Strings are rotations of each other"); 
else
	printf("Strings are not rotations of each other"); 
return 0; 
} 
