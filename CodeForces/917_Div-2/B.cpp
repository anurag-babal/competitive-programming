#include <bits/stdc++.h>

using namespace std;

void findUniqueSubstr(string s, unordered_set<string>& st) {
  if (s.size() == 1) {
    st.insert(s);
    return;
  }
  if (st.find(s) != st.end()) return;
  st.insert(s);
  findUniqueSubstr(s.substr(1), st);
  findUniqueSubstr(s[0] + s.substr(2), st);
}

void solve(int t) {
  for (int test = 0; test < t; test++) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_set<string> st;
    findUniqueSubstr(s, st);
    cout << st.size() << endl;
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