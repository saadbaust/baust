#include <iostream>
#include <cstring> // For strlen()
using namespace std;
int v = 0;
int c = 0;
int stringLength(const char *str, int v, int c)
{

    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            v++;
        }
        else
        {
            c++;
        }
        i++;
    }
    cout << "Vowel: " << v << endl;
    cout << "Consonantr: " << c << endl;
    return 0;
}

int main()
{
    char str[] = "aeiouSDFGH";

    stringLength(str, v, c);

    return 0;
}