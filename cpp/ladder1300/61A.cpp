#include <iostream>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int n = a.length();
    char c[n + 1]{};
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            c[i] = '0';
        }
        else
        {
            c[i] = '1';
        }
    }
    cout << c << endl;
    return 0;
}
