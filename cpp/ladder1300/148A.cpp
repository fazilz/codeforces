#include <iostream>
using namespace std;

int main(){
    // int k, l, m, n, d;
    int n[5];
    for (auto &i : n)
        cin >> i;
    int count = 0;
    for (int i = 1; i <= n[4]; i++)
        if((i%n[0]==0 )|| (i%n[1]== 0) || (i%n[2]==0) || (i%n[3]==0))
            count++;
    cout << count << endl;
    return 0;
}