#include <bits/stdc++.h>

using namespace std;

void solve(int t) {
  for (int test = 0; test < t; test++) {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
      int tmp;
      cin >> tmp;
      v.push_back(tmp);
    }
    bool status = false;
    for (int i = 0; i < n; i++) {
      long esum = 0, osum = 0;
      if (i % 2 == 0) esum = v[i];
      else osum = v[i];
      for (int j = i + 1; j < n; j++) {
        if (j % 2 == 0) esum += v[j];
        else osum += v[j];
        if (esum == osum) {
          cout << "YES";
          status = true;
          break;
        }
      }
      if (status) break;
    }
    if (!status) cout << "NO";
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