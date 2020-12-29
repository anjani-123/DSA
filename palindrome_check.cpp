/*#include <stdio.h>
#include <string.h>
int main()
{
  char a[100], b[100];

  printf("Enter a string to check if it's a palindrome\n");
  gets(a);

  strcpy(b, a);  // Copying input string
  strrev(b);  // Reversing the string

  if (strcmp(a, b) == 0) 
    printf("The string is a palindrome.\n");
  else
    printf("The string isn't a palindrome.\n");

  return 0;
}

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str1[20], str2[20];
    int i, j, len = 0, flag = 0;
    cout << "Enter the string : ";
    gets(str1);
    len = strlen(str1) - 1;
    for (i = len, j = 0; i >= 0 ; i--, j++)
        str2[j] = str1[i];
    if (strcmp(str1, str2))
        flag = 1;
    if (flag == 1)
        cout << str1 << " is not a palindrome";
    else
        cout << str1 << " is a palindrome";
    return 0;
}*/