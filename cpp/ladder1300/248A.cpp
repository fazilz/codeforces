#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n; 
    cin >> n;
    int left = 0,
        right = 0;
    int x = 0;
    for (int i = 0; i < n; i++){
        cin >> x; 
        left += x;
        cin >> x;
        right += x;
    }
    int t = ((n-left) < left) ? (n-left) : left;
    t += ((n-right) < right) ? (n-right) : right;
    cout << t << endl;
    return 0;
}