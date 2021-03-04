#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    auto j = unique(s.begin(), s.end());
    s.erase(j, s.end());
    if (s.length()% 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else 
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}