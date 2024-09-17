#include <iostream>
#include <cstring> // For strrev()
using namespace std;

void stringReverse(char *str)
{
    int length = 0;
    length = strlen(str);
    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main()
{
    char str[] = "Hello, World!";
    cout << "Original: " << str << endl;

    strrev(str);
    cout << "Reversed: " << str << endl;

    stringReverse(str);
    cout << "Reversed: " << str << endl;
    return 0;
}
