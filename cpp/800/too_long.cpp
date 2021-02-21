#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {
    int n;
    cin >> n;
    vector<string> s;
    string x;
    while(n > 0){
        cin >> x;
        s.push_back(x);
        n--;
    }
    int l = 0;
    for (auto x : s) {
        l = x.length();
        if (l > 10) {
            cout << x[0] <<  (l-2) << x[l-1] << "\n";
        } else {
            cout << x << "\n";
        }    
    }

    return 0;
}
