#include <bits/stdc++.h>

using namespace std;

void solve(int t) {
  for (int test = 0; test < t; test++) {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
      int tmp;
      cin >> tmp;
      a.push_back(tmp);
    }
    int left = 0;
    bool status = false;
    for (int i = 0; i < n; i++) {
      if (a[i] == 0) {
        cout << 0;
        status = true;
        break;
      }
      if (a[i] < 0) left++;
    }
    if (!status) {
      if (left % 2 == 0) {
        cout << 1 << endl;
        cout << 1 << " " << 0;
      }
      else cout << 0;
    }
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