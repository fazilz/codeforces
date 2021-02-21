#include <iostream>
using namespace std;

int main()
{
    /* code */
    int n, t;
    cin >> n >> t;
    char q[n];
    cin >> q;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (q[j] == 'B' and q[j + 1] == 'G')
            {
                q[j] = 'G', q[j + 1] = 'B';
                j += 1;
            }
        }
    }
    cout << q;
    return 0;
}
