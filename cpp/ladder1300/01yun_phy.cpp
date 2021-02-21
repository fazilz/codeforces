#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cin >> n;
    int xi, yi, zi;
    int x = 0, y = 0, z = 0;
    for (int a = 0; a < n; a++)
    {
        cin >> xi >> yi >> zi;
        x += xi;
        y += yi;
        z += zi;
    }
    if (x == 0 and y == 0 and z == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
