#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <tuple>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (auto &s : arr){
        cin >> s;
        s = ceil((float)s/m);
    }
    auto me = max_element(begin(arr), end(arr), 
        [](const int &rhs, const int &lhs) {
            return make_tuple(rhs, &rhs) < make_tuple(lhs, &lhs);
    });
    cout << distance(begin(arr), me)+1 <<endl;
    return 0;
}