#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "xy";
    string s2 = "12";
    string result = "x1y2";
    int ls1 = s1.length();
    int ls2 = s2.length();
    int lres = result.length();
    if((ls1+ls2)!=lres)
    cout << "No";
    else
    {
        int flag = 0;
        int i=0, j=0, k=0; //i for 1st string, j for 2nd string, k for result string
        while(k<lres)
        {
            if(i<ls1 && s1[i]==result[k])
            i++;
            else if(j<ls2 && s2[j]==result[k])
            j++;
            else
            {
                flag = 1;
                break;
            }
            k++;
            if(i<ls1 || j<ls2)
            cout << "No";
            else
            cout << "Yes";
        }
    }

    return 0;
}