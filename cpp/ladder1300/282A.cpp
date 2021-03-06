#include <iostream>
using namespace std;

int main(){
    int n, x =0;
    char c[3];
    cin >> n;
    for(int i = n; i > 0; i--){
        cin >> c;
        // making the assumption that each line is a valid "program"
        x = (c[0] == '+' || c[2] == '+') ? x+1 : x-1;
    }
    cout << x <<endl;

    return 0;
}