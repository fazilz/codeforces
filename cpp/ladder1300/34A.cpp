#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int h[n];
    for (auto &d : h)
        cin >> d;
    int f = 0, l =0, hi = 1000;
    for (int i = 0; i <n; i++){
        if (i==(n-1)){
            if (abs(h[i]-h[0]) < hi){
                f = i+1, l = 1;
                hi = abs(h[i]-h[0]);
            }
        } else if (abs(h[i]-h[i+1]) < hi){
            f = i+1, l = i+2;
            hi = abs(h[i]-h[i+1]);
        }
    }
    cout << f << " " << l << endl;
}