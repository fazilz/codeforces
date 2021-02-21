#include <iostream>
#include <math.h>
using namespace std;

bool isprime(int x)
{
    for (int i = 2; i <= sqrt(x) + 1; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int s, t;
    cin >> s >> t;
    for (s += 1; s <= t; s++)
    {
        auto x = isprime(s);
        if (x)
        {
            if (s < t)
            {

                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
            break;
        }
        else if (s == t)
        {

            cout << "NO" << endl;
        }
    }
    return 0;
}
