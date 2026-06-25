#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    string p = ""; 

    for (int i = s.size() - 1; i >= 0; i--) {
        p += s[i]; 
    }

    cout << p << endl;
    return 0;
}
