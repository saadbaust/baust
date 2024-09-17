#include <iostream>
#include <cstring>
using namespace std;

void *checkPlaindrome(char *str)
{
    char str2[10];
    strcpy(str2, str);
    strrev(str);
    int x = strcmp(str2, str);
    if (x == 0)
    {
        cout << "Palindrome!" << endl;
    }
    else
    {
        cout << "NOT Palindrome!" << endl;
    }
    return 0;
}

int main()
{
    char str[] = "SaaS";

    cout << "Main string: " << str << endl;

    checkPlaindrome(str);

    return 0;
}