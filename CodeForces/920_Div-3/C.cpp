#include <bits/stdc++.h>

using namespace std;

void solve(int t) {
  for (int test = 0; test < t; test++) {
    long long n, f, a, b;
    cin >> n >> f >> a >> b;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    long long cur = 0;
    long long i = 0;
    while(f > 0 && i < n) {
      if((v[i] - cur) * a >= b) {
        f -= b;
      } else {
        f -= (v[i] - cur) * a;
      }
      cur = v[i];
      i++;
    }
    if(f > 0 && i >= n) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
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