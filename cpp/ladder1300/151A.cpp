#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int td = (l*k)/nl, 
        tl = c * d, 
        ts = p/np;

    cout << min({td, tl, ts})/n << endl;
    return 0;
}