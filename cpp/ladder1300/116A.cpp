#include <iostream>
using namespace std;


int main(){
    int n, ai, bi, intrain = 0, cap = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> ai >> bi;
        intrain -= ai;
        intrain += bi;
        if (intrain > cap)
            cap = intrain;
    }
    cout << cap << endl;
    return 0;
}