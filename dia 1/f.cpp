#include <iostream>
#include <vector>

using namespace std;

struct trajeto
{
    int dist, congest, tempo;
};


int main() {
    int n, m, b, j, soma1 = 0, soma2 = 0;

    trajeto t;

    vector<trajeto>v1, v2;
    
    cin >> n >> m;

    for(j=0;j<n;j++) {
        cin >> t.dist;
        v1.push_back(t);
    }

    for(j=0;j<n;j++) {
        cin >> b;
        v1[j].congest = b;
        v1[j].tempo = v1[j].congest*v1[j].dist;
        soma1 += v1[j].tempo;
    }

    for(j=0;j<m;j++) {
        cin >> t.dist;
        v2.push_back(t);
    }

    for(j=0;j<m;j++) {
        cin >> b;
        v2[j].congest = b;
        v2[j].tempo = v2[j].congest*v2[j].dist;
        soma2 += v2[j].tempo;
    }

    if(soma1 < soma2) {
        cout << "TRAJETO 1";
    } else {
        cout << "TRAJETO 2";
    }





}