#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int l[5][5]{};
    int x = 0;
    for (int i = 1; i < 4; i++)
    {
        for (int k = 1; k < 4; k++)
        {
            cin >> l[i][k];
        }
    }
    for (int i = 1; i < 4; i++)
    {
        for (int k = 1; k < 4; k++)
        {
            x = 0;
            x = l[i][k] + l[i - 1][k] + l[i + 1][k] + l[i][k + 1] + l[i][k - 1];
            if (x % 2 == 0)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout << endl;
    }
    return 0;
}
