#include <iostream>
#include <cstring> // For strlen()
using namespace std;

int stringLength(const char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

int main()
{
    char str[] = "abcd efgh";

    cout << "Length using built in function: " << strlen(str) << endl; // strlen() function

    cout << "Length manualy: " << stringLength(str) << endl;

    return 0;
}