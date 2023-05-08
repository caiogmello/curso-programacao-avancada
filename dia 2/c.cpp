#include <iostream>
#include <stack>

using namespace std;

int main() {
  int n, m, x, i, p =0;
  stack<int>s;
  cin >> n >> m;

  for(i=0;i<n;i++) {
    cin >> x;
    if(!s.empty() && (s.top() + x) == 111) {
      s.pop();
      p+=10;
    } 
    else {
      s.push(x);
    }
    if(s.size()>=m) {
      cout << "game over";
      return 0;
    }
  }

  cout << p;
}
