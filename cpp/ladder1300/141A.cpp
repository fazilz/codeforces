#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string host, guest, pile;
    cin >> host >> guest >> pile;
    auto t = host + guest;
    if (t.length() == pile.length() && is_permutation(t.begin(), t.end(), pile.begin(), pile.end())) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}