#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>
using namespace std;

int main(){
    int n, x, y, c = 0;
    bool top, bot, left, right;
    cin >> n;
    vector<tuple<int, int>> points(n);
    for(auto &t: points){
        cin >> x >> y;
        t = make_tuple(x, y);
    }
    for (auto &[x1,y1] : points) {
        top = bot = left = right = false;
        for(auto  &[x2, y2] : points){
            if (y2 == y1){
                if (x1 > x2) {
                    left = true;
                } else if(x1 < x2){
                    right = true;
                }
            } else if (x1 == x2) {
                if(y1 > y2){
                    bot = true;
                } else if (y2 > y1) {
                    top = true;
                }
            }
        }
        if (top && bot && left && right)
            c++;
    }
    cout << c << endl;
    return 0;
}