#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int cap = 0, low = 0;
    for (auto &c : s)
    {
        if (toupper(c) == c)
        {
            cap += 1;
        }
        else
        {
            low += 1;
        }
    }
    if (cap > low)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s << endl;

    return 0;
}
