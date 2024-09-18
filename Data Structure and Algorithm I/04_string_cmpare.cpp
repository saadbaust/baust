#include <iostream>
#include <cstring> // For strcmp()
using namespace std;

int stringCompare(const char *str1, const char *str2)
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return 1;
        }
        i++;
    }
    return 0;
}

int main()
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    if (strcmp(str1, str2) == 0)
    {
        cout << "Strings are equal" << endl;
    }
    else
    {
        cout << "Strings are not equal" << endl;
    }

    if (stringCompare(str1, str2) == 0)
    {
        cout << "Strings are equal" << endl;
    }
    else
    {
        cout << "Strings are not equal" << endl;
    }
    return 0;
}
