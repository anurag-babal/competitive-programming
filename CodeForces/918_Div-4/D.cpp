#include <bits/stdc++.h>

using namespace std;

void solve(int t) {
  for (int test = 0; test < t; test++) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<string> v;
    int i = n - 1;
    while (i >= 0) {
      string str;
      if (s[i] == 'b' || s[i] == 'c' || s[i] == 'd') {
        i = i - 2;
        str.push_back(s[i++]);
        str.push_back(s[i++]);
        str.push_back(s[i]);
        i = i - 3;
      } else {
        i = i - 1;
        str.push_back(s[i++]);
        str.push_back(s[i]);
        i = i - 2;
      }
      if (i < n-4)
        str.push_back('.');
      v.push_back(str);
    }
    for (int i = v.size() - 1; i >= 0; i--) cout << v[i];
    cout << endl;
  }
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  int t;
  cin >> t;
  solve(t);

  return 0;
}