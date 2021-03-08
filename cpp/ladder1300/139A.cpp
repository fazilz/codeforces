#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int days[7];
    for(auto &d : days){
        cin >> d;
    }
    int d = 0;
    while (n > 0) {
        for (int i = 0; i < 7; i++) {
            if (n > 0){
                n -= days[i];
                d = i+1;
            }
        }
    }
    cout << d << endl;
    return 0;
}