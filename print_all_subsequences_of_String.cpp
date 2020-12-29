/*
The idea is that work on "bc" and add "a" to each result of output of "bc"
*/

#include<bits/stdc++.h>
using namespace std;

int subsequence(string s, string output[])
{
    if (s.size() == 0)
    {
        output[0] = "";
        return 1;
    }
    string smallstring = s.substr(1);  //Extracting string "bc"
    int smalloutputsize = subsequence(smallstring, output); 
    for(int i=0; i<smalloutputsize; i++)   //Adding string "a" in the output of "bc"
    output[i+smalloutputsize] = s[0] + output[i];  

    return 2*smalloutputsize;
}

int main()
{
    string s = "abc";   
    string *output = new string[8]; // 2 to the power size of string
    int count = subsequence(s, output);
    for(int i=0; i<count; i++)
    cout << output[i] << " ";
    return 0;
}