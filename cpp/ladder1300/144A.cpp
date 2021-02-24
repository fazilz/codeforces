#include <iostream>
using namespace std;

int main()
{
    int n;
    int moves = 0;
    cin >> n;
    int x;
    int maxN = 1, minN = 100, maxi = 0, mini = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x <= minN)
        {
            mini = i;
            minN = x;
        }
        if (x > maxN)
        {
            maxi = i;
            maxN = x;
        }
    }
    if (maxN == minN)
    {
        cout << 0 << endl;
    }
    else if (maxi > mini)
    {

        cout << maxi + (n - mini - 2) << endl;
    }
    else
    {
        cout << maxi + (n - mini - 1) << endl;
    }

    return 0;
}
