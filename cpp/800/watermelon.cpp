#include <iostream>
using namespace std;

int main() {
    int eve;
    cin >> eve;
    if ((eve % 2 == 0) && eve > 2) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}