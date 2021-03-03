#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int max = 0, min = 0, count = 0, x = 0;
    cin >> max;
    min = max;
    for (int i = 0; i < n-1; i++){
        cin >> x;
        if (x > max) {
            count++;
            max = x;
        } else if (x < min) {
            count++;
            min = x;
        }
    }
    cout << count << endl;
    return 0;
}