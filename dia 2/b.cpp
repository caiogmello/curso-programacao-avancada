#include <iostream>
#include <queue>
#include <vector>
#include <utility>

using namespace std;

int main(){
    int n, m, cont = 0;
    
    pair<int, int> p;
    queue<pair<int,int>> q;
    vector<int> v1;
    vector<vector<int>> v;

    cin >> n;

    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin >> m;
            v1.push_back(m);
        }
        v.push_back(v1);
        v1.clear();
    }

    cin >> p.first >> p.second;
    q.push(p);

    while(!q.empty()){
        auto x = q.front().first;
        auto y =q.front().second;
        if((x-1) >= 0){
            if(v[x-1][y] == 1){
                p = make_pair(x-1, y);
                q.push(p);
            }
        }
        if((y+1) < n){
            if(v[x][y+1] == 1){
            p = make_pair(x, y+1);
            q.push(p);
            }
        }

        if((x+1) < n){
            if(v[x+1][y] == 1){
            p = make_pair(x+1, y);
            q.push(p);
            }
        }
        if((y-1) >= 0){
            if(v[x][y-1] == 1){
            p = make_pair(x, y-1);
            q.push(p);
            }
        }
        if(v[x][y] == 1){
            v[x][y]++;
            cont++;
        }
        q.pop();
    }

    cout << cont << "\n";
    return 0;
}