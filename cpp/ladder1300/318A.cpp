#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int64_t n, k;
    cin >> n >> k;
    int64_t mid = ceil((double)n /2);
    if (k > mid)
    {
        k -= mid;
        cout << 2*k << endl;
    }
    else
    {
        cout << 2*(k-1)+1 << endl;
    }
    return 0;
}