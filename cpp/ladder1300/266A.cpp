#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    string s;
    cin >> n >> s;
    char prev = s[0];
    int cc = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == prev)
        {
            cc += 1;
        }
        else
        {
            prev = s[i];
        }
    }
    cout << cc << endl;
    return 0;
}
