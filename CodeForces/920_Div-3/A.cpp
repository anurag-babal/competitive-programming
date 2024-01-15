#include <bits/stdc++.h>

using namespace std;

void solve(int t) {
  for (int test = 0; test < t; test++) {
    int x1, y1, x2, y2;
    int side;
    cin >> x1 >> y1;
    for (int i = 0; i < 3; i++) {
      cin >> x2 >> y2;
      if (x1 == x2) side = y1 - y2;
    }
    cout << side*side << endl;
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