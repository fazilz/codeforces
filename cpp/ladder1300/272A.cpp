#include <iostream>
using namespace std;

int main() {
    int n, f, s = 0, x = 0;
    cin >> n;
    for (int i = n; i > 0; i--) {
        cin >> f;
        s += f;
    }
    for (int i = 1; i <= 5; i++){
        if ((s+i)%(n+1) != 1)   
            x += 1;
    }
    cout << x << '\n';
    return 0;
}