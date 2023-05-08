#include <iostream>
#include <map>

using namespace std;

int main() {
    int n, m, i;
    string str, x;
    map<string, string> map;

    cin >> n;

    for(i=0;i<n;i++) {
        cin >> str >> x;
        map[str] = x;
    }

    cin >> m;

    for(i=0;i<m;i++) {
        cin >> str;
        if(map.count(str))
            cout << map[str] << " ";
        else
            cout << str << " ";
    }
} 