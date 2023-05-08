#include <iostream>
#include <map>

using namespace std;

int main() {
    int n, i, cont = 0;
    string str;
    map<string,int> m;
    map<string,int> :: iterator it;

    cin >> n;

    for(i=0;i<n;i++) {
        while(cin>>str) {
            m[str] += 1;
        }
    }

    for(it = m.begin(); it != m.end(); it++) {
        if(it->second == 1) {
            cont++;
        }
    }

    cout << cont << endl;

    for(it = m.begin(); it != m.end(); it++) {
        if(it->second == 1) {
            cout << it->first << endl;
        }
    }

}