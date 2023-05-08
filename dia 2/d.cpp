#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n, i, ct = 0;
  string str;
  vector<string> v1 = {"<html>","<head>","<title>","<body>","<h1>"};
  vector<string> v2 = {"</html>","</head>","</title>","</body>","</h1>"};
  vector<string>::iterator it1;   
  vector<string>::iterator it2;   

  stack<string>s;

  cin >> n;

  for(i=0;i<n;i++) {
    cin >> str;
    if(!s.empty()){
      it1 = find(v1.begin(), v1.end(), s.top());
      it2 = find(v2.begin(), v2.end(), str);
      // cout << it1 - v1.begin() << " " << it2 - v2.begin() << endl;
      if(it1 - v1.begin() == it2 - v2.begin()){
        s.pop();
        ct ++;
      } else {
        s.push(str);
      }
    }
    else {
      s.push(str);
    }
  }

  if(!s.empty()) 
    cout << "Em construcao";
  else
    cout << ct;
}
