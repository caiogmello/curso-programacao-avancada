#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, x, i;
  vector<int>v;
  cin >> n;

  for(i=0;i<n;i++) {
    cin >> x;
    v.push_back(x);
  }

  for(i=0;i<n;i++) {
    cin >> x;
    if(v[i] == 0){
      cout << 0 << " ";
      continue;
    }
    cout << (x*100)/v[i] << " ";
  }
}