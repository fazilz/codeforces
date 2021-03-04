#include <iostream>
#include <set>
using namespace std;


int main(){
    int x = 0;
    set <int> c;
    int same = 0;
    for (int i = 0; i < 4; i++) {
        cin >> x;
        auto j = c.find(x);
        if (j!=c.end()){
            same += 1;
        }
        else {
            c.insert(x);
        }
    }
    cout << same << endl;
    return 0;
}