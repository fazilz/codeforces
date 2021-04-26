#include <iostream>
#include <cmath>
using namespace std;
// Generates a pattern for handkercheif for given n
// n is int[2, 9]
// pattern(2) results in pattern below:
//     0
//   0 1 0
// 0 1 2 1 0
//   0 1 0
//     0
int main(){
    int n;
    cin >> n;
    for (int row = -n; row <= n; ++row){
        int mid = n - abs(row);
        for (int col = 0; col < abs(row); ++col){
            cout << "  ";
        }
        for (int col = 0; col < mid; ++col){
            cout << col << " ";
        }
        for (int col = mid; col > 0; --col){
            cout << col << " ";
        }
        cout << 0<< endl;
    }
    return 0;
}