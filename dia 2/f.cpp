#include <iostream>
#include <map>
#include <utility>

using namespace std;

int main() {
    int n, i, x;
    string str;
    map<string, pair<string, int>> m;
    map<string, pair<string, int>> :: iterator it;
    pair<string, int> p;

    pair<string, int> max;
    max.second = 0;
    string smax;

    cin >> n;


    for(i=0;i<n;i++) {
        cin >> str >> p.first >> p.second;
        if(m.count(str)){
            if(p.second > m[str].second) 
                m[str] = p;
        }
        else
            m[str] = p;
        if(p.second > max.second){
            max = p;
            smax = str;
        }
    }

    cout << smax << " " << max.second << endl;

    for(it = m.begin(); it != m.end(); it++) {
        cout << it -> first << " " <<  it->second.second << endl; 
    }
} 