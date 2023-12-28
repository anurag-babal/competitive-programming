#include <bits/stdc++.h>

using namespace std;

void solve(int t) {
  for (int test = 0; test < t; test++) {
    int n;
    cin >> n;
    long sum = 0;
    for (int i = 0; i < n; i++) {
      int tmp;
      cin >> tmp;
      sum += tmp;
    }
    // if (sum < 4) cout << "NO";
    if (floor(sqrt(sum)) == sqrt(sum)) cout << "YES";
    else cout << "NO";
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