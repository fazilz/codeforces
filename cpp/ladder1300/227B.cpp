#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, a, b, bi;
    cin >> n;
    int index[n+1];
    for (int i = 1; i <= n; i++) {
        cin >> a;
        index[a] = i;
    }
    cin >> b;
    int64_t fs = 0, ls =  0;
    while (b > 0) {
        cin >> bi;
        fs += index[bi];
        ls += n-index[bi]+1;
        b--;
    }
    cout << fs << " " << ls << '\n';
    return 0;
}