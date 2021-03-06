#include <iostream>
using namespace std;

int main(){
    int n, a, b, c, count = 0;
    cin >> n;
    for (int i = n; i > 0; i--) {
        cin >> a >> b >> c;
        if ((a+b+c) >= 2) 
            count++;
    }
    cout << count << endl;
    return 0;
}