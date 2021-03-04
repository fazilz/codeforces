#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;


int main(){
    string s;
    cin >> s;
    vector<char> v;
    for (auto c:s){
        if (c != '+')
            v.push_back(c);
    }
    sort(v.begin(), v.end());
    string r = accumulate(++v.begin(), v.end(), string()+v[0], 
                          [](const string& a, char b) {return a+'+'+b;});
    cout << r << endl;
    return 0;
}