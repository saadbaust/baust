#include <iostream>
#include <cstring> // For strcpy()
using namespace std;
void stringCopy(char *dest, const char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main()
{
    char src[] = "Hello, World!";
    char dest[20];

    strcpy(dest, src);
    cout << "Copied String func: " << dest << endl;

    stringCopy(dest, src);
    std::cout << "Copied String no func: " << dest << std::endl;

    return 0;
}
