#include <iostream>
using namespace std;

int main()
{
    int oi = 0, oj = 0, x = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> x;
            if (x == 1)
            {
                oi = i + 1;
                oj = j + 1;
            }
        }
    }
    cout << abs(oi - 3) + abs(oj - 3) << endl;
    return 0;
}
