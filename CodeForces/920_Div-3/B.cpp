#include <bits/stdc++.h>

using namespace std;

void solve(int t) {
  for (int test = 0; test < t; test++) {
    int n;
    cin >> n;
    // int a[n];
    // for (int i = 0; i < n; i++) cin >> a[i];
    // int b[n];
    // for (int i = 0; i < n; i++) cin >> b[i];
    string a = "";
    string b = "";
    cin >> a >> b;
 
    unordered_map<int,int> m;
    for(int i = 0; i < n; i++) {
      if(a[i] == '1') {
        m[i]++;
      }
    }
    for(int i = 0; i < n; i++) {
      if(b[i] == '1') {
        m[i]--;
      }
    }
    long long int a1 = 0;
    long long int b1 = 0;
    for(auto i : m) {
      if(i.second > 0) {
        a1++;
      }
      if(i.second < 0) {
        b1++;
      }
    }
    cout << max(a1,b1) << endl;
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