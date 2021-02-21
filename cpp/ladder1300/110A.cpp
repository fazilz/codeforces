#include <iostream>
using namespace std;

int main()
{
    long long int i;
    cin >> i;
    // check if the numbers of 4s and 7s is
    // either 4 or 7
    int c = 0, x = 0;
    while (i != 0)
    {
        x = i % 10;
        i /= 10;
        if (x == 4 or x == 7)
            c += 1;
    }
    if (c == 4 or c == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
