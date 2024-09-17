#include <iostream>
#include <cstring> // For strcat()
using namespace std;

void stringConcat(char *dest, const char *src)
{
    int i, j = 0;
    i = strlen(src) + 1;
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}
int main()
{
    char str1[20] = "Hello, ";
    char str2[] = "World!";

    // strcat(str1, str2);
    cout << "Concatenated String: " << str1 << endl;

    stringConcat(str1, str2);
    cout << "Concatenated String: " << str1 << endl;
    return 0;
}
