#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {
  int n, c, i;
  string saida = "Vamos todos encontrar a montanha!";
  vector<pair<string, int>>v;
  vector<string>v2;
  pair<string,int>p;
  
  cin >> n;
  
  for(i=0;i<n;i++) {
    cin >> p.first >> p.second;
    v.push_back(p);
  }

  cin >> c;

  for(i=0;i<n;i++) {
    if(v[i].second > c) {
      saida = "Vamos virar almoço de aranhas gigantes!";
      v2.push_back(v[i].first);
    }
  }

  cout << saida << endl;

  for(i=0;i<v2.size();i++){
    cout << v2[i] << endl;
  }
}