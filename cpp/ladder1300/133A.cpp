#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    bool f = false;
    auto i = s.begin();
    while(!f && i != s.end()){
        if (*i == '9' || *i == 'H' || *i == 'Q'){
            f = true;
        }
        i++;
    }
    if (f){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}