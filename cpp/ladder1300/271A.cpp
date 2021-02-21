#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int y;
    cin >> y;
    int yn[4];
    int x;
    bool iter = true;
    while (iter)
    {
        y += 1;
        x = y;
        for (int i = 0; i < 4; i += 1)
        {
            yn[i] = x % 10;
            x /= 10;
        }
        for (int i = 0; i < 4; i += 1)
        {
            for (int j = i + 1; j < 4; j += 1)
            {
                if (yn[i] == yn[j])
                    iter = false;
            }
        }
        if (iter)
        {
            cout << y;
            break;
        }
        else
        {
            iter = true;
        }
    }
    return 0;
}
