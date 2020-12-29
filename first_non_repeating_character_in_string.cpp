#include<bits/stdc++.h>
using namespace std;

char first_non_repeating(string str)
{
    map<char, int> m;
    for(int i=0; i<str.length(); i++)
    {
        char current_character = str[i];
        m[str[i]]++;
    }
    for(int i=0; i<str.length(); i++)
    {
        if(m[str[i]] > 1)
        return str[i];
    }
    return str[0];   //If not found, return the first character of string
}

int main()
{
    string str = "maabcdef";
    char result = first_non_repeating(str);
    cout << result << endl;
    return 0;
}