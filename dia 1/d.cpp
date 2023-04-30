#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, x, i, m, b;
  vector<int>v1, v2;
  int t = 0;
  cin >> n;

  for(i=0;i<n;i++) {
    cin >> x;
    v1.push_back(x);
  }

  for(i=0;i<n;i++) {
    cin >> x;
    v2.push_back(x);
  }

  cin >> m >> b;

  for(i=0;i<n;i++) {
    v1[i] = v1[i]*(v2[i]+b);
    t += v1[i];
  }

  if(t >= m) {
    cout << "Upou de Nivel!";
  } else {
    cout << "Nao foi dessa vez!";
  }
  
}