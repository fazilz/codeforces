#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int32_t n, t, j=0, m = INT32_MAX; 
    bool f = false;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> t;
        if (t <= m)
        {
            f = m == t;
            m = t;
            j = i;
        }
    }
    if (f){
        cout << "Still Rozdil" << endl;
    } 
    else
    {
        cout << j+1 << endl;
    }
    return 0;
}