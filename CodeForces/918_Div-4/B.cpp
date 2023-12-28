#include <bits/stdc++.h>

using namespace std;

void solve(int t) {
  for (int test = 0; test < t; test++) {
    char square[3][3];
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        cin >> square[i][j];
      }
    }
    for (int i = 0; i < 3; i++) {
      int sum = 0;
      bool status = false;
      for (int j = 0; j < 3; j++) {
        char c = square[i][j];
        if (c != '?') sum += c - 'A';
        else status = true;
      }
      if (status) {
        cout << char('A' + (3 - sum)) << endl;
        break;
      }
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