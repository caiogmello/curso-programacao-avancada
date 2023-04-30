#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, x, i;
  vector<int>v1;
  vector<int>v2;
  
  cin >> n;
  
  for(i=0;i<n;i++) {
    cin >> x;
    v1.push_back(x);
  }

  for(i=0;i<n;i++) {
    cin >> x;
    v2.push_back(x);
  }

  for(i=0;i<n;i++) {
    cin >> x;
    if(x != v1[i]+v2[i]) {
      cout << "NOPE :(";
      return 0;
    }
  }

  cout << "OK";

  
}