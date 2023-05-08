#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n, m, i, x;
    queue<int>q;
    cin >> n >> m;

    for(i=0;i<n;i++) {
        cin >> x;
        q.push(x);
    }

    while(m>0 && !q.empty()) {
        m--;
        if(q.front() > 0) 
            q.front() --;
        if(q.front() > 0)
            q.push(q.front());
        q.pop();
    }
    if(q.empty()) {
        cout << "pronto";
        return 0;
    }

    cout << q.size() << endl;

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

}
