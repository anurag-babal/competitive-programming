#include <bits/stdc++.h>

using namespace std;

void solve(int t) {
  for (int test = 0; test < t; test++) {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b) cout << c;
    else if (a == c) cout << b;
    else cout << a;
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