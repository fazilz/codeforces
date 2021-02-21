#include <iostream>
using namespace std;

int main()
{
    // empty string c style
    char s[200] = {};
    char a[200] = {};
    cin >> s;
    int i = 0, n = 0;
    while (s[i] != '\0' and i < 200)
    {
        if (s[i] == '.')
        {
            a[n] = '0';
        }
        else if (s[i] == '-' and (i == 199 or s[i + 1] == '-'))
        {
            a[n] = '2';
            i += 1;
        }
        else
        {
            a[n] = '1';
            i += 1;
        }
        n += 1;
        i += 1;
    }
    cout << a;
    return 0;
}
